void setup() {
  // put your setup code here, to run once:
Keyboard.begin();//开始键盘通信

delay(1000);//延时1000毫秒，不要太短，因为每天电脑的运行速度都不一样

Keyboard.press(KEY_CAPS_LOCK); //按下大写键 这里我们最好这样写 不然大多数电脑在中文输入的情况下就会出现问题

Keyboard.release(KEY_CAPS_LOCK); //释放大写键

delay(500);

Keyboard.press(KEY_LEFT_GUI);//按下徽标键 也就是win键

delay(500);

Keyboard.press('r');//按下r键

delay(500);

Keyboard.release(KEY_LEFT_GUI);//松掉win键

Keyboard.release('r');//松掉r键

delay(500);

Keyboard.println("cmd");//正常cmd窗口运行,输入你自己的命令
//Keyboard.println("CMD /t:01 /k \"@ECHO OFF && MODE CON:cols=15 lines=1 && TITLE iNSTALLING dRIVERS\"");//隐藏cmd窗口运行

delay(500);

Keyboard.press(KEY_RETURN);  //按下回车键

Keyboard.release(KEY_RETURN); //释放回车键

delay(500);

Keyboard.println("echo first test");

Keyboard.press(KEY_RETURN);  //按下回车键

Keyboard.release(KEY_RETURN); //释放回车键

delay(500);

Keyboard.press(KEY_CAPS_LOCK); //按下大写键

Keyboard.release(KEY_CAPS_LOCK); //释放大写键 我们再次关闭开启的大写键

delay(500);

Keyboard.end();
}

void loop() {
  // put your main code here, to run repeatedly:

}
