#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"

void Setup(AlxWindow* w){
    
}
void Update(AlxWindow* w){
    
    Clear(BLACK);
    
    //Circle_R_Render(WINDOW_STD_ARGS,(Vec2){ 400.0f,200.0f },(Vec2){ 400.0f,200.0f },BLUE);
    //Circle_R_RenderWire(WINDOW_STD_ARGS,(Vec2){ 400.0f,200.0f },(Vec2){ 400.0f,200.0f },WHITE,1.0f);

    Circle_C_Render(WINDOW_STD_ARGS,(Vec2){ 900.0f,400.0f },(Vec2){ 800.0f,200.0f },(Vec2){ 0.5f,0.5f },BLUE);
    Circle_C_RenderWire(WINDOW_STD_ARGS,(Vec2){ 900.0f,400.0f },(Vec2){ 800.0f,200.0f },(Vec2){ 0.5f,0.5f },WHITE,1.0f);
}
void Delete(AlxWindow* w){

}

int main() {
    if(Create("Graphics",1000,1000,1,1,Setup,Update,Delete)){
        Start();
    }
    return 0;
}
