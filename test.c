#include <SDL2/SDL.h>

int main(int argc, char *argv[]) {
    SDL_Init(SDL_INIT_VIDEO); // 初始化SDL视频模块

    SDL_Window *window = SDL_CreateWindow("SDL Tutorial", // 窗口标题
                                          SDL_WINDOWPOS_UNDEFINED, // 窗口位置x
                                          SDL_WINDOWPOS_UNDEFINED, // 窗口位置y
                                          800,                     // 宽度
                                          600,                     // 高度
                                          SDL_WINDOW_SHOWN); // 窗口标志

    SDL_Renderer *renderer =
        SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // 设置颜色红色
    SDL_RenderClear(renderer);                        // 清除窗口

    SDL_Rect fillRect = {200, 200, 200, 200};         // 创建一个矩形
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255); // 设置颜色绿色
    SDL_RenderFillRect(renderer, &fillRect);          // 绘制矩形

    SDL_RenderPresent(renderer); // 更新窗口

    SDL_Delay(5000); // 延时

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
