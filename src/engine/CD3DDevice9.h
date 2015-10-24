#ifndef _cd3ddevice9_h_
#define _cd3ddevice9_h_

#include "d3dtypes.h"

//typedef int D3DSAMP_ADDRESSU;
//typedef int D3DSAMP_ADDRESSV;
//typedef int D3DSAMP_ADDRESSW;
//
#ifndef _D3DSAMPLERSTATETYPE_
#define _D3DSAMPLERSTATETYPE_
typedef enum _D3DSAMPLERSTATETYPE
{
	D3DSAMP_ADDRESSU = 1,  /* D3DTEXTUREADDRESS for U coordinate */
	D3DSAMP_ADDRESSV = 2,  /* D3DTEXTUREADDRESS for V coordinate */
	D3DSAMP_ADDRESSW = 3,  /* D3DTEXTUREADDRESS for W coordinate */
	D3DSAMP_BORDERCOLOR = 4,  /* D3DCOLOR */
	D3DSAMP_MAGFILTER = 5,  /* D3DTEXTUREFILTER filter to use for magnification */
	D3DSAMP_MINFILTER = 6,  /* D3DTEXTUREFILTER filter to use for minification */
	D3DSAMP_MIPFILTER = 7,  /* D3DTEXTUREFILTER filter to use between mipmaps during minification */
	D3DSAMP_MIPMAPLODBIAS = 8,  /* float Mipmap LOD bias */
	D3DSAMP_MAXMIPLEVEL = 9,  /* DWORD 0..(n-1) LOD index of largest map to use (0 == largest) */
	D3DSAMP_MAXANISOTROPY = 10, /* DWORD maximum anisotropy */
	D3DSAMP_SRGBTEXTURE = 11, /* Default = 0 (which means Gamma 1.0,
							  no correction required.) else correct for
							  Gamma = 2.2 */
							  D3DSAMP_ELEMENTINDEX = 12, /* When multi-element texture is assigned to sampler, this
														 indicates which element index to use.  Default = 0.  */
														 D3DSAMP_DMAPOFFSET = 13, /* Offset in vertices in the pre-sampled displacement map.
																				  Only valid for D3DDMAPSAMPLER sampler  */
																				  D3DSAMP_FORCE_DWORD = 0x7fffffff, /* force 32-bit size enum */
} D3DSAMPLERSTATETYPE;
#endif

typedef enum _D3DRS_D3DRENDERSTATETYPE {
	D3DRS_ZENABLE = 7,    /* D3DZBUFFERTYPE (or TRUE/FALSE for legacy) */
	D3DRS_FILLMODE = 8,    /* D3DFILLMODE */
	D3DRS_SHADEMODE = 9,    /* D3DSHADEMODE */
	D3DRS_ZWRITEENABLE = 14,   /* TRUE to enable z writes */
	D3DRS_ALPHATESTENABLE = 15,   /* TRUE to enable alpha tests */
	D3DRS_LASTPIXEL = 16,   /* TRUE for last-pixel on lines */
	D3DRS_SRCBLEND = 19,   /* D3DBLEND */
	D3DRS_DESTBLEND = 20,   /* D3DBLEND */
	D3DRS_CULLMODE = 22,   /* D3DCULL */
	D3DRS_ZFUNC = 23,   /* D3DCMPFUNC */
	D3DRS_ALPHAREF = 24,   /* D3DFIXED */
	D3DRS_ALPHAFUNC = 25,   /* D3DCMPFUNC */
	D3DRS_DITHERENABLE = 26,   /* TRUE to enable dithering */
	D3DRS_ALPHABLENDENABLE = 27,   /* TRUE to enable alpha blending */
	D3DRS_FOGENABLE = 28,   /* TRUE to enable fog blending */
	D3DRS_SPECULARENABLE = 29,   /* TRUE to enable specular */
	D3DRS_FOGCOLOR = 34,   /* D3DCOLOR */
	D3DRS_FOGTABLEMODE = 35,   /* D3DFOGMODE */
	D3DRS_FOGSTART = 36,   /* Fog start (for both vertex and pixel fog) */
	D3DRS_FOGEND = 37,   /* Fog end      */
	D3DRS_FOGDENSITY = 38,   /* Fog density  */
	D3DRS_RANGEFOGENABLE = 48,   /* Enables range-based fog */
	D3DRS_STENCILENABLE = 52,   /* BOOL enable/disable stenciling */
	D3DRS_STENCILFAIL = 53,   /* D3DSTENCILOP to do if stencil test fails */
	D3DRS_STENCILZFAIL = 54,   /* D3DSTENCILOP to do if stencil test passes and Z test fails */
	D3DRS_STENCILPASS = 55,   /* D3DSTENCILOP to do if both stencil and Z tests pass */
	D3DRS_STENCILFUNC = 56,   /* D3DCMPFUNC fn.  Stencil Test passes if ((ref & mask) stencilfn (stencil & mask)) is true */
	D3DRS_STENCILREF = 57,   /* Reference value used in stencil test */
	D3DRS_STENCILMASK = 58,   /* Mask value used in stencil test */
	D3DRS_STENCILWRITEMASK = 59,   /* Write mask applied to values written to stencil buffer */
	D3DRS_TEXTUREFACTOR = 60,   /* D3DCOLOR used for multi-texture blend */
	D3DRS_WRAP0 = 128,  /* wrap for 1st texture coord. set */
	D3DRS_WRAP1 = 129,  /* wrap for 2nd texture coord. set */
	D3DRS_WRAP2 = 130,  /* wrap for 3rd texture coord. set */
	D3DRS_WRAP3 = 131,  /* wrap for 4th texture coord. set */
	D3DRS_WRAP4 = 132,  /* wrap for 5th texture coord. set */
	D3DRS_WRAP5 = 133,  /* wrap for 6th texture coord. set */
	D3DRS_WRAP6 = 134,  /* wrap for 7th texture coord. set */
	D3DRS_WRAP7 = 135,  /* wrap for 8th texture coord. set */
	D3DRS_CLIPPING = 136,
	D3DRS_LIGHTING = 137,
	D3DRS_AMBIENT = 139,
	D3DRS_FOGVERTEXMODE = 140,
	D3DRS_COLORVERTEX = 141,
	D3DRS_LOCALVIEWER = 142,
	D3DRS_NORMALIZENORMALS = 143,
	D3DRS_DIFFUSEMATERIALSOURCE = 145,
	D3DRS_SPECULARMATERIALSOURCE = 146,
	D3DRS_AMBIENTMATERIALSOURCE = 147,
	D3DRS_EMISSIVEMATERIALSOURCE = 148,
	D3DRS_VERTEXBLEND = 151,
	D3DRS_CLIPPLANEENABLE = 152,
	D3DRS_POINTSIZE = 154,   /* float point size */
	D3DRS_POINTSIZE_MIN = 155,   /* float point size min threshold */
	D3DRS_POINTSPRITEENABLE = 156,   /* BOOL point texture coord control */
	D3DRS_POINTSCALEENABLE = 157,   /* BOOL point size scale enable */
	D3DRS_POINTSCALE_A = 158,   /* float point attenuation A value */
	D3DRS_POINTSCALE_B = 159,   /* float point attenuation B value */
	D3DRS_POINTSCALE_C = 160,   /* float point attenuation C value */
	D3DRS_MULTISAMPLEANTIALIAS = 161,  // BOOL - set to do FSAA with multisample buffer
	D3DRS_MULTISAMPLEMASK = 162,  // DWORD - per-sample enable/disable
	D3DRS_PATCHEDGESTYLE = 163,  // Sets whether patch edges will use float style tessellation
	D3DRS_DEBUGMONITORTOKEN = 165,  // DEBUG ONLY - token to debug monitor
	D3DRS_POINTSIZE_MAX = 166,   /* float point size max threshold */
	D3DRS_INDEXEDVERTEXBLENDENABLE = 167,
	D3DRS_COLORWRITEENABLE = 168,  // per-channel write enable
	D3DRS_TWEENFACTOR = 170,   // float tween factor
	D3DRS_BLENDOP = 171,   // D3DBLENDOP setting
	D3DRS_POSITIONDEGREE = 172,   // NPatch position interpolation degree. D3DDEGREE_LINEAR or D3DDEGREE_CUBIC (default)
	D3DRS_NORMALDEGREE = 173,   // NPatch normal interpolation degree. D3DDEGREE_LINEAR (default) or D3DDEGREE_QUADRATIC
	D3DRS_SCISSORTESTENABLE = 174,
	D3DRS_SLOPESCALEDEPTHBIAS = 175,
	D3DRS_ANTIALIASEDLINEENABLE = 176,
	D3DRS_MINTESSELLATIONLEVEL = 178,
	D3DRS_MAXTESSELLATIONLEVEL = 179,
	D3DRS_ADAPTIVETESS_X = 180,
	D3DRS_ADAPTIVETESS_Y = 181,
	D3DRS_ADAPTIVETESS_Z = 182,
	D3DRS_ADAPTIVETESS_W = 183,
	D3DRS_ENABLEADAPTIVETESSELLATION = 184,
	D3DRS_TWOSIDEDSTENCILMODE = 185,   /* BOOL enable/disable 2 sided stenciling */
	D3DRS_CCW_STENCILFAIL = 186,   /* D3DSTENCILOP to do if ccw stencil test fails */
	D3DRS_CCW_STENCILZFAIL = 187,   /* D3DSTENCILOP to do if ccw stencil test passes and Z test fails */
	D3DRS_CCW_STENCILPASS = 188,   /* D3DSTENCILOP to do if both ccw stencil and Z tests pass */
	D3DRS_CCW_STENCILFUNC = 189,   /* D3DCMPFUNC fn.  ccw Stencil Test passes if ((ref & mask) stencilfn (stencil & mask)) is true */
	D3DRS_COLORWRITEENABLE1 = 190,   /* Additional ColorWriteEnables for the devices that support D3DPMISCCAPS_INDEPENDENTWRITEMASKS */
	D3DRS_COLORWRITEENABLE2 = 191,   /* Additional ColorWriteEnables for the devices that support D3DPMISCCAPS_INDEPENDENTWRITEMASKS */
	D3DRS_COLORWRITEENABLE3 = 192,   /* Additional ColorWriteEnables for the devices that support D3DPMISCCAPS_INDEPENDENTWRITEMASKS */
	D3DRS_BLENDFACTOR = 193,   /* D3DCOLOR used for a constant blend factor during alpha blending for devices that support D3DPBLENDCAPS_BLENDFACTOR */
	D3DRS_SRGBWRITEENABLE = 194,   /* Enable rendertarget writes to be DE-linearized to SRGB (for formats that expose D3DUSAGE_QUERY_SRGBWRITE) */
	D3DRS_DEPTHBIAS = 195,
	D3DRS_WRAP8 = 198,   /* Additional wrap states for vs_3_0+ attributes with D3DDECLUSAGE_TEXCOORD */
	D3DRS_WRAP9 = 199,
	D3DRS_WRAP10 = 200,
	D3DRS_WRAP11 = 201,
	D3DRS_WRAP12 = 202,
	D3DRS_WRAP13 = 203,
	D3DRS_WRAP14 = 204,
	D3DRS_WRAP15 = 205,
	D3DRS_SEPARATEALPHABLENDENABLE = 206,  /* TRUE to enable a separate blending function for the alpha channel */
	D3DRS_SRCBLENDALPHA = 207,  /* SRC blend factor for the alpha channel when D3DRS_SEPARATEDESTALPHAENABLE is TRUE */
	D3DRS_DESTBLENDALPHA = 208,  /* DST blend factor for the alpha channel when D3DRS_SEPARATEDESTALPHAENABLE is TRUE */
	D3DRS_BLENDOPALPHA = 209,  /* Blending operation for the alpha channel when D3DRS_SEPARATEDESTALPHAENABLE is TRUE */


	D3DRS_FORCE_DWORD = 0x7fffffff, /* force 32-bit size enum */
} D3DRS_D3DRENDERSTATETYPE;

typedef enum _D3DTEXTUREFILTERTYPE
{
	D3DTEXF_NONE = 0,    // filtering disabled (valid for mip filter only)
	D3DTEXF_POINT = 1,    // nearest
	D3DTEXF_LINEAR = 2,    // linear interpolation
	D3DTEXF_ANISOTROPIC = 3,    // anisotropic
	D3DTEXF_PYRAMIDALQUAD = 6,    // 4-sample tent
	D3DTEXF_GAUSSIANQUAD = 7,    // 4-sample gaussian
	/* D3D9Ex only -- */
#if !defined(D3D_DISABLE_9EX)

	D3DTEXF_CONVOLUTIONMONO = 8,    // Convolution filter for monochrome textures

#endif // !D3D_DISABLE_9EX
	/* -- D3D9Ex only */
	D3DTEXF_FORCE_DWORD = 0x7fffffff,   // force 32-bit size enum
} D3DTEXTUREFILTERTYPE;

typedef enum _D3DFORMAT
{
	D3DFMT_UNKNOWN = 0,

	D3DFMT_R8G8B8 = 20,
	D3DFMT_A8R8G8B8 = 21,
	D3DFMT_X8R8G8B8 = 22,
	D3DFMT_R5G6B5 = 23,
	D3DFMT_X1R5G5B5 = 24,
	D3DFMT_A1R5G5B5 = 25,
	D3DFMT_A4R4G4B4 = 26,
	D3DFMT_R3G3B2 = 27,
	D3DFMT_A8 = 28,
	D3DFMT_A8R3G3B2 = 29,
	D3DFMT_X4R4G4B4 = 30,
	D3DFMT_A2B10G10R10 = 31,
	D3DFMT_A8B8G8R8 = 32,
	D3DFMT_X8B8G8R8 = 33,
	D3DFMT_G16R16 = 34,
	D3DFMT_A2R10G10B10 = 35,
	D3DFMT_A16B16G16R16 = 36,

	D3DFMT_A8P8 = 40,
	D3DFMT_P8 = 41,

	D3DFMT_L8 = 50,
	D3DFMT_A8L8 = 51,
	D3DFMT_A4L4 = 52,

	D3DFMT_V8U8 = 60,
	D3DFMT_L6V5U5 = 61,
	D3DFMT_X8L8V8U8 = 62,
	D3DFMT_Q8W8V8U8 = 63,
	D3DFMT_V16U16 = 64,
	D3DFMT_A2W10V10U10 = 67,

	D3DFMT_UYVY = MAKEFOURCC('U', 'Y', 'V', 'Y'),
	D3DFMT_R8G8_B8G8 = MAKEFOURCC('R', 'G', 'B', 'G'),
	D3DFMT_YUY2 = MAKEFOURCC('Y', 'U', 'Y', '2'),
	D3DFMT_G8R8_G8B8 = MAKEFOURCC('G', 'R', 'G', 'B'),
	D3DFMT_DXT1 = MAKEFOURCC('D', 'X', 'T', '1'),
	D3DFMT_DXT2 = MAKEFOURCC('D', 'X', 'T', '2'),
	D3DFMT_DXT3 = MAKEFOURCC('D', 'X', 'T', '3'),
	D3DFMT_DXT4 = MAKEFOURCC('D', 'X', 'T', '4'),
	D3DFMT_DXT5 = MAKEFOURCC('D', 'X', 'T', '5'),

	D3DFMT_D16_LOCKABLE = 70,
	D3DFMT_D32 = 71,
	D3DFMT_D15S1 = 73,
	D3DFMT_D24S8 = 75,
	D3DFMT_D24X8 = 77,
	D3DFMT_D24X4S4 = 79,
	D3DFMT_D16 = 80,

	D3DFMT_D32F_LOCKABLE = 82,
	D3DFMT_D24FS8 = 83,

	/* D3D9Ex only -- */
#if !defined(D3D_DISABLE_9EX)

	/* Z-Stencil formats valid for CPU access */
	D3DFMT_D32_LOCKABLE = 84,
	D3DFMT_S8_LOCKABLE = 85,

#endif // !D3D_DISABLE_9EX
	/* -- D3D9Ex only */


	D3DFMT_L16 = 81,

	D3DFMT_VERTEXDATA = 100,
	D3DFMT_INDEX16 = 101,
	D3DFMT_INDEX32 = 102,

	D3DFMT_Q16W16V16U16 = 110,

	D3DFMT_MULTI2_ARGB8 = MAKEFOURCC('M', 'E', 'T', '1'),

	// Floating point surface formats

	// s10e5 formats (16-bits per channel)
	D3DFMT_R16F = 111,
	D3DFMT_G16R16F = 112,
	D3DFMT_A16B16G16R16F = 113,

	// IEEE s23e8 formats (32-bits per channel)
	D3DFMT_R32F = 114,
	D3DFMT_G32R32F = 115,
	D3DFMT_A32B32G32R32F = 116,

	D3DFMT_CxV8U8 = 117,

	/* D3D9Ex only -- */
#if !defined(D3D_DISABLE_9EX)

	// Monochrome 1 bit per pixel format
	D3DFMT_A1 = 118,

	// 2.8 biased fixed point
	D3DFMT_A2B10G10R10_XR_BIAS = 119,


	// Binary format indicating that the data has no inherent type
	D3DFMT_BINARYBUFFER = 199,

#endif // !D3D_DISABLE_9EX
	/* -- D3D9Ex only */


	D3DFMT_FORCE_DWORD = 0x7fffffff
} D3DFORMAT;

/* Display Modes */
typedef struct _D3DDISPLAYMODE
{
	UINT            Width;
	UINT            Height;
	UINT            RefreshRate;
	D3DFORMAT       Format;
} D3DDISPLAYMODE;

/* Multi-Sample buffer types */
typedef enum _D3DMULTISAMPLE_TYPE
{
	D3DMULTISAMPLE_NONE = 0,
	D3DMULTISAMPLE_NONMASKABLE = 1,
	D3DMULTISAMPLE_2_SAMPLES = 2,
	D3DMULTISAMPLE_3_SAMPLES = 3,
	D3DMULTISAMPLE_4_SAMPLES = 4,
	D3DMULTISAMPLE_5_SAMPLES = 5,
	D3DMULTISAMPLE_6_SAMPLES = 6,
	D3DMULTISAMPLE_7_SAMPLES = 7,
	D3DMULTISAMPLE_8_SAMPLES = 8,
	D3DMULTISAMPLE_9_SAMPLES = 9,
	D3DMULTISAMPLE_10_SAMPLES = 10,
	D3DMULTISAMPLE_11_SAMPLES = 11,
	D3DMULTISAMPLE_12_SAMPLES = 12,
	D3DMULTISAMPLE_13_SAMPLES = 13,
	D3DMULTISAMPLE_14_SAMPLES = 14,
	D3DMULTISAMPLE_15_SAMPLES = 15,
	D3DMULTISAMPLE_16_SAMPLES = 16,

	D3DMULTISAMPLE_FORCE_DWORD = 0x7fffffff
} D3DMULTISAMPLE_TYPE;

class CD3DDevice9
{
	enum EMaxTextureSize
	{
		eMTS_256 = 0,
		eMTS_512,
		eMTS_1024,
		eMTS_2048,

		eMTS_NumTextureSizes
	};

	////////////////////////////////////////////////////////////////////////////////////////////
	struct SD3DDeviceMode
	{
		D3DDISPLAYMODE			mode;
		D3DFORMAT				fmtDepthStencil;
		D3DMULTISAMPLE_TYPE		d3dMultiSampleSetting;
	};

	////////////////////////////////////////////////////////////////////////////////////////////////////
	struct SD3DVideoResolution
	{
		int						iWidth;
		int						iHeight;
		int						iFreq;
	};

	struct SD3DDeviceSetupParams
	{
		int						iAdapterID;
		HMONITOR				hMonitor;
		MONITORINFOEX			monitorInfo;
		bool					bRunWindowed;
		bool					bWindowModeValid;
		bool					bAntiAliased;
		bool					bWaitForVSync;
		int						iWindowOffsetX;
		int						iWindowOffsetY;

		SD3DDeviceMode			sWindowedMode;
		SD3DDeviceMode			sFullScreenMode;

		D3DTEXTUREFILTERTYPE	d3dMinFilter;
		D3DTEXTUREFILTERTYPE	d3dMagFilter;
		D3DTEXTUREFILTERTYPE	d3dMipFilter;

		char					szDevType[64];
		char					szAAType[64];

		int						iNumRes;
		int						iCurrentRes;
		SD3DVideoResolution *	pFullScreenResArray;

		//
		EMaxTextureSize			maxTextureSize;
		bool					bAutoGenMipmap;
		DWORD					dwMaxTextureSize;
	};



private:
	static CD3DDevice9 instance;

	SD3DDeviceSetupParams m_sDevSetupParams;

public:
	static inline CD3DDevice9 * Get()
	{
		return &instance;
	}

	void SetSamplerState(int a, int b, D3DTEXTUREADDRESS c) {}
	void SetRenderState(D3DRS_D3DRENDERSTATETYPE a, bool b) {}
	void UpdateCurrentMode() {}
	inline SD3DDeviceSetupParams * GetDeviceSetupParams()	{ return &m_sDevSetupParams; }
	HRESULT	ResetDevice(bool bWindowed, DWORD dwWidth = 0, DWORD dwHeight = 0, int iRate = 60, bool forceReset = false) { return S_OK; }
	bool IsWindowed() { return false; }
};

#endif