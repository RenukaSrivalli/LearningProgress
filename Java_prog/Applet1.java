import java.applet.*;
import java.awt.*;
/*<applet  code=Applet1 width=400 height=600>
</applet>*/
public class Applet1 extends Applet
{
	public void init()
	{
		setBackground(Color.blue);
		setForeground(Color.green);
	}
	public void paint(Graphics g)
	{
		g.drawString("Welcome to applets",100,100);
	}
}