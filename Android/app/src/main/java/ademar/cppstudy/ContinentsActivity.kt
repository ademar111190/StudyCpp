package ademar.cppstudy

import android.os.Bundle
import android.support.v7.app.AppCompatActivity

class ContinentsActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_continents)
        attachView()
    }

    override fun onStart() {
        super.onStart()
        start()
    }

    override fun onDestroy() {
        super.onDestroy()
        destroy()
    }

    private external fun attachView()
    private external fun start()
    private external fun destroy()

    companion object {

        init {
            System.loadLibrary("continents")
        }

    }

}
