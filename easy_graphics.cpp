#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

void drawLine(int x1, int y1, int x2, int y2) {
    cout << "Drawing line from (" << x1 << "," << y1 << ") to (" << x2 << "," << y2 << ")\n";
    
    // Simple line drawing algorithm representation
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    
    cout << "Line properties:\n";
    cout << "  Delta X: " << dx << "\n";
    cout << "  Delta Y: " << dy << "\n";
    
    if (dx > dy) {
        cout << "  This is a horizontal-dominant line\n";
    } else {
        cout << "  This is a vertical-dominant line\n";
    }
}

int main() {
    cout << "========================================\n";
    cout << "   SIMPLE GRAPHICS SIMULATOR\n";
    cout << "========================================\n\n";
    
    // Draw some lines
    drawLine(100, 100, 200, 200);
    cout << "----------------------------------------\n";
    drawLine(50, 150, 250, 150);
    cout << "----------------------------------------\n";
    drawLine(200, 50, 200, 250);
    
    cout << "\n========================================\n";
    cout << "   GRAPHICS OUTPUT COMPLETE!\n";
    cout << "========================================\n";
    
    system("pause");
    return 0;
}
