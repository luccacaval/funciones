int D = 20;
int x = 0;
int y = 200;
int p1x = 20;
int p1y = 170;
int p2x = 360;
int p2y = 170;
int vx = 1;
int vy = 0;

void setup() {
  size(400,400);
  background(0);
  fill(255);
}

void drawBall(int x, int y) {
 ellipse(x,y,D,D);
}

void update() {
  x += vx;
  y += vy;
}

void walls(){
  if (x > width || x < 0)  vx *= -1;
  if (y > height || y < 0)  vy *= -1;
}

void drawPaddle1(int px, int py){
  rect(px, py, 20, 60);
}

void drawPaddle2(int px, int py){
  rect(px, py, 20, 60);
}

void paddleColider(int p1x, int p1y, int p2x, int p2y){
  if((p1))
}

void draw(){
  background(0);
  drawPaddle1(p1x, p1y);
  drawPaddle2(p2x, p2y);
  drawBall(x,y);
  update();
  walls();
}
