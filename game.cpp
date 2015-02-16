
void handvar(){
     monitor= create_bitmap(SCREEN_W,SCREEN_H);
     back= load_bitmap("background.pcx",NULL);
     mouseimg= load_bitmap("cursor.pcx",NULL);
     }
///////////////////////////////////////////////////////
void loadgame(){
     
     handvar();
     
     while(1){
              if(key[KEY_ESC]) exit(0);
              if(key[KEY_UP]) planey--;
              if(key[KEY_DOWN]) planey++;
              if(key[KEY_LEFT]) planex--;
              if(key[KEY_RIGHT]) planex++;
              
              blit(monitor,screen,0,0,0,0,SCREEN_W,SCREEN_H);
              blit(back,monitor,0,0,0,0,back->w, back->h);
              circle(monitor,planex,planey,12,makecol(255,0,0));
              
              line(monitor, planex, planey, mouse_x, mouse_y, makecol(0,255,0));
              set_mouse_sprite(mouseimg);
              show_mouse(monitor);
              set_mouse_range(50,50,900,600);
              
              set_mouse_speed(2,2);
              
              if(mouse_b&1) circle(monitor,mouse_x,mouse_y,12,makecol(255,0,255));
              if(mouse_b&2) circle(monitor,mouse_x,mouse_y,12,makecol(255,255,0));
           
              }
}
                     
