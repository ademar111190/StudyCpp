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

    external fun attachView()
    external fun start()
    external fun destroy()

    companion object {

        init {
            System.loadLibrary("continents")
        }

    }

}
