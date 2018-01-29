package ademar.cppstudy

import android.annotation.SuppressLint
import android.preference.PreferenceManager
import java.io.File
import java.io.FileOutputStream
import java.io.OutputStream

class InstallDatabase(
        private val context: App
) {

    @SuppressLint("ApplySharedPref") // it is necessary to have it installed
    fun execute() {
        val preferences = PreferenceManager.getDefaultSharedPreferences(context)
        if (!preferences.getBoolean("installed", false)) {

            val assetManager = context.assets
            val toPath = context.filesDir.path + "/input.db"
            val input = assetManager.open("input.db")
            val output: OutputStream
            File(toPath).createNewFile()
            output = FileOutputStream(toPath)
            val buffer = ByteArray(1024)
            var read = input.read(buffer)
            while (read != -1) {
                output.write(buffer, 0, read)
                read = input.read(buffer)
            }
            input.close()
            output.flush()
            output.close()

            preferences.edit()
                    .putBoolean("installed", true)
                    .commit()
        }
    }

}
