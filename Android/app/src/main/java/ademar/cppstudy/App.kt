package ademar.cppstudy

import android.app.Application

class App : Application() {

    override fun onCreate() {
        super.onCreate()
        PathManager(this).execute()
    }

}
