package ademar.cppstudy

class PathManager(
        private val context: App
) {

    private val installDatabase: InstallDatabase = InstallDatabase(context)

    fun execute() {
        installDatabase.execute()
        setInputDatabase("${context.filesDir.path}/input.db")
    }

    private external fun setInputDatabase(path: String)

    companion object {

        init {
            System.loadLibrary("pathManager")
        }

    }

}
