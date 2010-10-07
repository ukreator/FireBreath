#ifndef H_PLUGINWINDOWMAC_COCOA_CG
#define H_PLUGINWINDOWMAC_COCOA_CG

/**********************************************************\
 Original Author: Anson MacKeracher
 
 Created:    May 5, 2010
 License:    Dual license model; choose one of two:
 Eclipse Public License - Version 1.0
 http://www.eclipse.org/legal/epl-v10.html
 - or -
 GNU Lesser General Public License, version 2.1
 http://www.gnu.org/licenses/lgpl-2.1.html
 
 Copyright 2010 Anson MacKeracher, Firebreath development team
 \**********************************************************/

#include "PluginWindowMacCocoa.h"
#include "PluginEvents/MacEventCocoa.h"
#include "NpapiTypes.h"
#include <map>

namespace FB {
    class PluginWindowMacCocoa;

    class PluginWindowMacCocoaCG : public PluginWindowMacCocoa
    {
    public:
        PluginWindowMacCocoaCG(NP_CGContext* context);
        ~PluginWindowMacCocoaCG();

    public:
        void clearWindow();
        int16_t HandleEvent(NPCocoaEvent* event);
        NP_CGContext* getContext() { return m_context; }
        
        void setWindowPosition(int32_t x, int32_t y, uint32_t width, uint32_t height);
        void setWindowClipping(uint16_t top, uint16_t left, uint16_t bottom, uint16_t right);
        NPRect getWindowPosition();
        NPRect getWindowClipping();

    protected:
        NP_CGContext* m_context;
        int m_x;
        int m_y;
        int m_width;
        int m_height;
        
        int m_clipLeft;
        int m_clipRight;
        int m_clipTop;
        int m_clipBottom;
    };
};
#endif // H_PLUGINWINDOWMAC_COCOA_CG
