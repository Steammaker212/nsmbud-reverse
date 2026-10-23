/* sub_60969DE4
 * address: 0x60969DE4   size: 27044   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60969DE4(_DWORD *a1, int a2, _DWORD *a3)
{
  int v6; // r0
  int v7; // r9
  _DWORD *v8; // r5
  int v9; // r0
  const char *v10; // r8
  const char *v11; // r0
  int v12; // r7
  const char *v13; // r0
  _DWORD *v14; // r6
  int i; // r8
  _DWORD *v16; // r4
  unsigned int v17; // r0
  int v18; // r7
  int v19; // r0
  const char *v20; // r0
  int v21; // r0
  unsigned int v22; // r1
  int v23; // r0
  const char *v24; // r0
  const char *v25; // r0
  const char *v26; // r0
  const char *v27; // r0
  const char *v28; // r0
  const char *v29; // r0
  const char *v30; // r0
  int v31; // r1
  const char *v32; // r0
  const char *v33; // r0
  const char *v34; // r0
  const char *v35; // r0
  const char *v36; // r0
  int v37; // r0
  const char *v38; // r0
  const char *v39; // r0
  const char *v40; // r0
  int v41; // r1
  const char *v42; // r0
  int v43; // r0
  unsigned int v44; // r1
  const char *v45; // r0
  const char *v46; // r0
  int v47; // r0
  _DWORD *v49; // [sp+Ch] [bp-43Ch]
  int v50; // [sp+14h] [bp-434h]
  int (**v51)(); // [sp+18h] [bp-430h] BYREF
  const char *v52; // [sp+1Ch] [bp-42Ch]

  v6 = (*(int (__fastcall **)(_DWORD *, int))(*a3 + 64))(a3, 4);
  v7 = 0;
  v51 = &sead__SafeStringBase__vtable;
  v52 = "agl__detail__ShaderHolder";
  v50 = sead__ExpHeap__create(v6, (int)&v51, a3, 4, 1, 0);
  v49 = a1;
  v8 = a1 + 213;
  v9 = 0x15F6F2u;
  do
  {
    v10 = off_60C5EC2C[v7];
    v11 = (const char *)sub_6091AE90(v9);
    sub_604209A4(&v51, "%s.%s", v10, v11);
    v12 = (*(int (__fastcall **)(int, int (***)(), _DWORD))(*(_DWORD *)a2 + 24))(a2, &v51, 0);
    v13 = (const char *)sharcb_ref(v12);
    sub_604209A4(&v51, "%s.%s", v10, v13);
    v9 = v12 | (*(int (__fastcall **)(int, int (***)(), _DWORD))(*(_DWORD *)a2 + 24))(a2, &v51, 0);
    if ( v9 )
      v9 = sub_6091E838(v8);
    ++v7;
    v8 += 24;
  }
  while ( v7 != 6 );
  v14 = v49;
  for ( i = 0; i != 205; ++i )
  {
LABEL_7:
    v16 = &v14[24 * *((_DWORD *)&unk_60C5EC44 + 2 * i)];
    if ( v16[218] || v16[219] )
    {
      v51 = &sead__SafeStringBase__vtable;
      v52 = *((const char **)&unk_60C5EC44 + 2 * i + 1);
      v17 = sub_6091F9A0(v16 + 213, &v51);
      v18 = 0;
      if ( v16[220] > v17 )
        v18 = v16[221] + 936 * v17;
      v19 = v14[5];
      if ( v19 < v14[6] )
      {
        *(_DWORD *)(v14[7] + 4 * v19) = v18;
        ++v14[5];
      }
      switch ( i )
      {
        case 0:
          Undefined_ref_91CC00(v18, 6, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cWorldViewMatrix[0]";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cWorldViewProjectionMatrix[0]";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDiffuseColor0";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDiffuseColor1";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSpecularColor";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v31 = 5;
          v32 = "cViewLightDir";
          goto LABEL_55;
        case 1:
          Undefined_ref_91CC00(v18, 5, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNear";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cFar";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDepth[0]";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColor[0]";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLineNum";
          sub_6091CD98(v18, 4, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cTexDepth";
          goto LABEL_131;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
        case 42:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 101:
          Undefined_ref(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "aPosition";
          sub_6091CB20(v18, 0, &v51);
          Undefined_ref_91CC00(v18, 26, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uProjViewWorld[0]";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexSize";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uMipLevel";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uSlice";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTexScale";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTexRotate";
          sub_6091CD98(v18, 5, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTexTrans";
          sub_6091CD98(v18, 6, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uMultiSampleNum";
          sub_6091CD98(v18, 7, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uColor";
          sub_6091CD98(v18, 8, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uColorMatrix[0]";
          sub_6091CD98(v18, 9, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTexFlipY";
          sub_6091CD98(v18, 10, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTexFetchAdjust";
          sub_6091CD98(v18, 11, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColorDriftR";
          sub_6091CD98(v18, 12, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColorDriftG";
          sub_6091CD98(v18, 13, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColorDriftB";
          sub_6091CD98(v18, 14, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uColorT";
          sub_6091CD98(v18, 15, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uColorB";
          sub_6091CD98(v18, 16, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uCubeMapFace";
          sub_6091CD98(v18, 17, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uBlurOffset";
          sub_6091CD98(v18, 18, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uDepthNear";
          sub_6091CD98(v18, 19, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uInvDepthRange";
          sub_6091CD98(v18, 21, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uOneMinusNearDivFar";
          sub_6091CD98(v18, 20, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNV12DecodeParam";
          sub_6091CD98(v18, 22, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uGamma";
          sub_6091CD98(v18, 23, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uQuadTriangleZ";
          sub_6091CD98(v18, 24, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uNormalizeValue";
          sub_6091CD98(v18, 25, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v20 = "uTexture_1";
          goto LABEL_15;
        case 7:
        case 8:
          Undefined_ref_91CC00(v18, 13, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "c3DTexCoordOffset";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cHSBG";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCurveA[0]";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCurveB[0]";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cToyCam_Offset1";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cToyCam_Offset2";
          sub_6091CD98(v18, 5, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cToyCam_Level1";
          sub_6091CD98(v18, 6, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cToyCam_Level2";
          sub_6091CD98(v18, 7, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cToyCam_Saturation1";
          sub_6091CD98(v18, 8, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cToyCam_Saturation2";
          sub_6091CD98(v18, 9, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cToyCam_Brightness";
          sub_6091CD98(v18, 10, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cToyCam_Contrast";
          sub_6091CD98(v18, 11, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cToyCam_MulColor";
          sub_6091CD98(v18, 12, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexColor";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v20 = "cTexCorrectionMap";
          goto LABEL_15;
        case 9:
          Undefined_ref_91CC00(v18, 27, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uProjViewWorld[0]";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexSize";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTexCoordScale";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uMipLevel";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uAlpha";
          sub_6091CD98(v18, 26, &v51);
          Undefined_ref_91CE08(v18, 6, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uSnapColor";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uSnapDepth";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v34 = "uTargetDepth";
          goto LABEL_120;
        case 54:
          Undefined_ref_91CC00(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cPositions[0]";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v31 = 1;
          v32 = "cClearColor";
          goto LABEL_55;
        case 55:
          Undefined_ref_91CC00(v18, 5, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cWorld[0]";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cView[0]";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cProj[0]";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColor";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v35 = "cPosition[0]";
          goto LABEL_115;
        case 56:
          Undefined_ref_91CC00(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cProjViewWorld[0]";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cArcInfo";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v36 = "cColor";
          goto LABEL_109;
        case 57:
          Undefined_ref_91CC00(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cPVW_Cylinder";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cPVW_Hemisphere";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColor";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v31 = 3;
          v32 = "cHemisphereOffsetLocal";
LABEL_55:
          v52 = v32;
          v37 = v18;
          goto LABEL_116;
        case 58:
        case 59:
          Undefined_ref(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "aPosition";
          sub_6091CB20(v18, 0, &v51);
          Undefined_ref_91CC00(v18, 26, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uProjViewWorld[0]";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uMipLevel";
          sub_6091CD98(v18, 2, &v51);
          Undefined_ref_91CE08(v18, 9, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTextureColor_0";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTextureColor_1";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTextureColor_2";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTextureColor_3";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTextureColor_4";
          sub_6091CFA0(v18, 4u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTextureColor_5";
          sub_6091CFA0(v18, 5u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTextureColor_6";
          sub_6091CFA0(v18, 6u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uTextureColor_7";
          sub_6091CFA0(v18, 7u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v22 = 8;
          v29 = "uTextureDepth";
          goto LABEL_45;
        case 60:
        case 61:
        case 62:
        case 63:
          Undefined_ref_91CC00(v18, 10, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLuminanceWeight";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cThresholdParam";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cComposeColor";
          sub_6091CD98(v18, 5, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDepthParam0";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDepthParam1";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNearFarTexSize";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cGaussianParam";
          sub_6091CD98(v18, 6, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLuminanceParam";
          sub_6091CD98(v18, 7, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cParam6";
          sub_6091CD98(v18, 8, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cParam7";
          sub_6091CD98(v18, 9, &v51);
          Undefined_ref_91CE08(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureColor";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureDepth";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v27 = "cTextureLuminanceOffset";
          goto LABEL_41;
        case 64:
          Undefined_ref_91CC00(v18, 5, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cParam";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexCoordCoeff0";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexCoordCoeff1";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColorCorrectionCoeff";
          sub_6091CD98(v18, 4, &v51);
          Undefined_ref_91CE08(v18, 5, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cExposureTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cHDRImage";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cBloom";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColorCorrectionTable";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v38 = "cNormalizedLinearDepth";
          goto LABEL_135;
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
          Undefined_ref_91CC00(v18, 13, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cParam0";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cIndirectTexParam";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cIndirectTexMtx0";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cIndirectTexMtx1";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cMulParam";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAddParam";
          sub_6091CD98(v18, 5, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNearFarParam";
          sub_6091CD98(v18, 6, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexParam";
          sub_6091CD98(v18, 7, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cVignettingRadius";
          sub_6091CD98(v18, 8, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cVignettingParam";
          sub_6091CD98(v18, 9, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cVignettingTrans";
          sub_6091CD98(v18, 10, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cVignettingColor";
          sub_6091CD98(v18, 11, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cFarMulColor";
          sub_6091CD98(v18, 12, &v51);
          Undefined_ref_91CE08(v18, 5, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexColor";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexDepth";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexMipMap";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexMipMapDepth";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v24 = "cTexIndirect";
          goto LABEL_24;
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
          Undefined_ref_91CC00(v18, 12, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cFrameSize";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cFrameRCP1H";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cFrameRCPOffset";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLumaCoeff";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cEdgeThreshold";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cQualityParam";
          sub_6091CD98(v18, 5, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAlphaOut";
          sub_6091CD98(v18, 6, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cFinalPowerGL";
          sub_6091CD98(v18, 7, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cPrevScreenCoordTrx[0]";
          sub_6091CD98(v18, 8, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNearFar";
          sub_6091CD98(v18, 9, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNearFarCache";
          sub_6091CD98(v18, 10, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDrawDepth";
          sub_6091CD98(v18, 11, &v51);
          Undefined_ref_91CE08(v18, 5, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexBase";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexLuma";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexReduce";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexDepth";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v24 = "cTexPrev";
LABEL_24:
          v52 = v24;
          v21 = v18;
          v22 = 4;
          goto LABEL_16;
        case 77:
          Undefined_ref_91CC00(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cFrameRCP";
          sub_6091CD98(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexNormal";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "cTexReduce";
          goto LABEL_129;
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
          Undefined_ref_91D080(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "imOutputColor";
          sub_6091D218(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "imEdgeCounter";
          sub_6091D218(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "imEdgePosStorage";
          sub_6091D218(v18, 2, &v51);
          Undefined_ref_91D500(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "outputSSBO";
          sub_6091D698(v18, 0, &v51);
          Undefined_ref_91D288(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Common";
          sub_6091D420(v18, 0, &v51);
          Undefined_ref_91CC00(v18, 6, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cScreenParam";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSMAAEdgeParam";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSMAAWeightCalcParam";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSMAASubsampleIndices";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cVelocityMapParam";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSMAAComposeParam";
          sub_6091CD98(v18, 5, &v51);
          Undefined_ref_91CE08(v18, 8, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureCurColor";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexturePrevColor";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureVelocityMap";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureLuminanceMap";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureLuminanceMap";
          v14 = v49;
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureEdgeMap";
          sub_6091CFA0(v18, 4u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureBlendWeightMap";
          sub_6091CFA0(v18, 5u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureSMAAArea";
          sub_6091CFA0(v18, 6u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v25 = "cTextureSMAASearch";
          goto LABEL_31;
        case 85:
        case 86:
          Undefined_ref_91D288(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Light";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "LightView";
          sub_6091D420(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "LightMip";
          sub_6091D420(v18, 2, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLUT";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v20 = "cNormal";
LABEL_15:
          v52 = v20;
          v21 = v18;
          v22 = 1;
          goto LABEL_16;
        case 87:
          Undefined_ref_91D288(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "BlendInfo";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "ProbeSH";
          sub_6091D420(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNormal";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLightMap0";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v40 = "cLightMap1";
          goto LABEL_133;
        case 88:
        case 89:
        case 90:
          Undefined_ref_91D288(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Context";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "PointLightView";
          sub_6091D420(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "SpotLightView";
          sub_6091D420(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "ProjLightView";
          sub_6091D420(v18, 3, &v51);
          Undefined_ref_91CE08(v18, 6, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDepth";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNormal";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSpecPowTable";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cProjTex";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDepthShadow";
          sub_6091CFA0(v18, 4u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v28 = "cAlbedo";
          goto LABEL_43;
        case 91:
          Undefined_ref_91CC00(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cWVP[0]";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColor";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v36 = "cSpotCone_CenterScale";
          goto LABEL_109;
        case 92:
        case 93:
          Undefined_ref(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "aPosition";
          sub_6091CB20(v18, 0, &v51);
          Undefined_ref_91CC00(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexOffsetScale";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexWidthInv";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexOffsetAdjust";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "c3DTexCoordOffset";
          sub_6091CD98(v18, 3, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v30 = "cTexture";
          goto LABEL_47;
        case 94:
          Undefined_ref_91CC00(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "uParam0";
          sub_6091CD98(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "uTexture";
          goto LABEL_131;
        case 95:
          Undefined_ref_91CC00(v18, 7, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexFlipY";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCubeMapFace";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCubeMapArrayIndex";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cMipLevel";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureWidth";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAngleScale";
          sub_6091CD98(v18, 5, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cOffsetScale";
          sub_6091CD98(v18, 6, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "sTexCube";
          goto LABEL_131;
        case 96:
          Undefined_ref_91CC00(v18, 5, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexFlipY";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCubeMapFace";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCubeMapArrayIndex";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cMipLevel";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureWidth";
          sub_6091CD98(v18, 4, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "sTexCube";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "sTexCorrectValue";
          goto LABEL_129;
        case 97:
          Undefined_ref_91CC00(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexFlipY";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureWidth";
          sub_6091CD98(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "sTexHeadArray";
          goto LABEL_131;
        case 98:
          Undefined_ref_91CC00(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexFlipY";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureWidth";
          sub_6091CD98(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "sTexHead";
          goto LABEL_131;
        case 99:
          Undefined_ref_91CC00(v18, 7, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexFlipY";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cMipLevel";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCubeMapFace";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCubeMapArrayIndex";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureWidth";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDynamicRange";
          sub_6091CD98(v18, 5, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cHDRDecodePower";
          sub_6091CD98(v18, 6, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "sTexCube";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "sTexCorrectValue";
          goto LABEL_129;
        case 100:
          Undefined_ref_91CC00(v18, 8, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cProjMtx[0]";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cViewMtx[0]";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCenterPos";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAspect";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cScale";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColor";
          sub_6091CD98(v18, 5, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cIntensity";
          sub_6091CD98(v18, 6, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexFlipY";
          sub_6091CD98(v18, 7, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "sTexture";
          goto LABEL_131;
        case 102:
          Undefined_ref(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "aPosition";
          sub_6091CB20(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "aBlendWeight";
          sub_6091CB20(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "aBlendIndex";
          sub_6091CB20(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "aTexCoord0";
          sub_6091CB20(v18, 3, &v51);
          Undefined_ref_91D288(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "View";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Skeleton";
          sub_6091D420(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Material";
          sub_6091D420(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Shape";
          sub_6091D420(v18, 3, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cAlbedo";
          goto LABEL_131;
        case 103:
          Undefined_ref_91CC00(v18, 10, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cProjViewMtx[0]";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cWorldMtx[0]";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCamWorld";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cUseReflection";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cUseMipLevel";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDynamicRange";
          sub_6091CD98(v18, 5, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cHDRDecodePower";
          sub_6091CD98(v18, 6, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAlphaAdd";
          sub_6091CD98(v18, 7, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cMipLevel";
          sub_6091CD98(v18, 8, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCubeMapArrayIndex";
          sub_6091CD98(v18, 9, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "sTexCube";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "sTexCorrectValue";
          goto LABEL_129;
        case 104:
          Undefined_ref_91CC00(v18, 5, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cPVW[0]";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNearFarParam";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cInvTextureSize";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureIndex";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureIndexY";
          sub_6091CD98(v18, 4, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cTexture";
          goto LABEL_131;
        case 105:
          Undefined_ref_91CC00(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cInvTexSize";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSlice";
          sub_6091CD98(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cTexture";
          goto LABEL_131;
        case 106:
        case 107:
        case 108:
        case 109:
          Undefined_ref_91CC00(v18, 7, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAOParam0";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAOParam1";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAOParam2";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNearFar";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cInvTexSize";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSamplePoint[0]";
          sub_6091CD98(v18, 5, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cRotate[0]";
          sub_6091CD98(v18, 6, &v51);
          Undefined_ref_91CE08(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureRotate";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureDepth";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureMask";
          sub_6091CFA0(v18, 3u, (int)&v51);
          Undefined_ref_91D288(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAO_UB";
          sub_6091D420(v18, 0, &v51);
          continue;
        case 110:
          Undefined_ref_91D288(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "View";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "AABB";
          sub_6091D420(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Sphere";
          sub_6091D420(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v41 = 3;
          v42 = "Cylinder";
          goto LABEL_111;
        case 112:
          Undefined_ref_91D288(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Context";
          sub_6091D420(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cDepth";
          goto LABEL_131;
        case 113:
          Undefined_ref_91D288(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Element";
          sub_6091D420(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cOcclusion";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexture";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v40 = "cTexture2";
          goto LABEL_133;
        case 114:
        case 115:
          Undefined_ref_91CC00(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexSizeRCP";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cReferLevel";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cReferSlice";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cReferFace";
          sub_6091CD98(v18, 3, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v30 = "cTexture";
          goto LABEL_47;
        case 116:
          Undefined_ref_91D288(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Common";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "SphereBlock";
          sub_6091D420(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "CylinderBlock";
          sub_6091D420(v18, 2, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLinearDepth";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "cTexColor";
          goto LABEL_129;
        case 117:
        case 118:
          Undefined_ref_91CC00(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cRadius";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cBlurPosition";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cVtxColor[0]";
          sub_6091CD98(v18, 2, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v30 = "cTexture";
          goto LABEL_47;
        case 119:
          Undefined_ref_91CC00(v18, 8, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTanFovyHalf";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cProjOffset";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcStep";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDstStep";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cIntensity";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cRange";
          sub_6091CD98(v18, 5, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSteep";
          sub_6091CD98(v18, 7, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNear";
          sub_6091CD98(v18, 6, &v51);
          Undefined_ref_91CE08(v18, 8, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcLight";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcAlbedo";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcDepth";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcNormal";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcPos";
          sub_6091CFA0(v18, 4u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDstAlbedo";
          sub_6091CFA0(v18, 5u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDstDepth";
          sub_6091CFA0(v18, 6u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          goto LABEL_77;
        case 120:
          Undefined_ref_91CC00(v18, 10, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTanFovyHalf";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cProjOffset";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcStep";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDstStep";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cIntensity";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cRange";
          sub_6091CD98(v18, 5, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSteep";
          sub_6091CD98(v18, 7, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNear";
          sub_6091CD98(v18, 6, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cPow";
          sub_6091CD98(v18, 8, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cInflate";
          sub_6091CD98(v18, 9, &v51);
          Undefined_ref_91CE08(v18, 8, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcLight";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcAlbedo";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcDepth";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcNormal";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcPos";
          sub_6091CFA0(v18, 4u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDstAlbedo";
          sub_6091CFA0(v18, 5u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDstDepth";
          sub_6091CFA0(v18, 6u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
LABEL_77:
          v52 = "cDstNormal";
          v43 = v18;
          v44 = 7;
          goto LABEL_6;
        case 121:
        case 122:
          Undefined_ref_91CC00(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cStep";
          sub_6091CD98(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cSrc";
          goto LABEL_131;
        case 123:
          Undefined_ref_91CC00(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTanFovyHalf";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cProjOffset";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cRange";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNear";
          sub_6091CD98(v18, 3, &v51);
          Undefined_ref_91CE08(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLight";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAlbedo";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v40 = "cDepth";
          goto LABEL_133;
        case 124:
          Undefined_ref_91CC00(v18, 6, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTanFovyHalf";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cProjOffset";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcStep";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDstStep";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cRange";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNear";
          sub_6091CD98(v18, 5, &v51);
          Undefined_ref_91CE08(v18, 7, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcLight0";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcLight1";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcNormal";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcDepth";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDstAlbedo";
          sub_6091CFA0(v18, 4u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDstNormal";
          sub_6091CFA0(v18, 5u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v44 = 6;
          v45 = "cDstDepth";
          goto LABEL_127;
        case 125:
          Undefined_ref_91CC00(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cThreshold";
          sub_6091CD98(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrc0";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "cSrc1";
          goto LABEL_129;
        case 126:
          Undefined_ref_91CC00(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cParam0";
          sub_6091CD98(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cHeightTexture";
          goto LABEL_131;
        case 127:
          Undefined_ref_91CC00(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cParam0";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cParam1";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cParam2";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cParam3";
          sub_6091CD98(v18, 3, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "cPrevTexture";
          goto LABEL_129;
        case 128:
          Undefined_ref_91CC00(v18, 6, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTanFovyHalf";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cProjOffset";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cBias";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cStep";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDepthCorrection";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAlpha";
          sub_6091CD98(v18, 5, &v51);
          Undefined_ref_91CE08(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcLight";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcDepth";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v40 = "cBiasTex";
          goto LABEL_133;
        case 129:
          Undefined_ref_91CC00(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cWeight";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAlpha";
          sub_6091CD98(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cSrc";
          goto LABEL_131;
        case 130:
          Undefined_ref_91CC00(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcStep";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAlpha";
          sub_6091CD98(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrc0";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "cSrc1";
          goto LABEL_129;
        case 131:
          Undefined_ref_91CC00(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cBaseDepth";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNear";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cRange";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cOneMinusNearDivFar";
          sub_6091CD98(v18, 3, &v51);
          Undefined_ref_91CE08(v18, 6, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSss0";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSss1";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSss2";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNoSss";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDepth";
          sub_6091CFA0(v18, 4u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v34 = "cTrans";
          goto LABEL_120;
        case 132:
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrc";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "cWeight";
          goto LABEL_129;
        case 133:
          Undefined_ref_91D288(v18, 1, v50);
          v41 = 0;
          v51 = &sead__SafeStringBase__vtable;
          v42 = "Seed";
          goto LABEL_111;
        case 134:
          Undefined_ref_91CC00(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcStep";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAlpha";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColor";
          sub_6091CD98(v18, 2, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cSrc";
          goto LABEL_131;
        case 135:
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cSrc";
          goto LABEL_131;
        case 136:
          Undefined_ref_91CC00(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v46 = "cColor";
          goto LABEL_96;
        case 137:
          Undefined_ref_91CC00(v18, 6, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cGhostDispersal";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cGhostColor[0]";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cHaloWidth";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cHaloColor";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cChromaDistortion";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColor";
          sub_6091CD98(v18, 5, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cSrc";
          goto LABEL_131;
        case 138:
          Undefined_ref_91CC00(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcStep";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAlpha";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cThreshold";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColor";
          sub_6091CD98(v18, 3, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cSrc";
          goto LABEL_131;
        case 139:
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColor";
          sub_6091CFA0(v18, 0, (int)&v51);
          Undefined_ref_91CC00(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v46 = "cParam0";
LABEL_96:
          v52 = v46;
          v37 = v18;
          v31 = 0;
          goto LABEL_116;
        case 140:
        case 141:
          Undefined_ref_91D288(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Common";
          sub_6091D420(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 5, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLinearDepth";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAoBuffer";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "texDynamicShadowCascade";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "texDynamicShadow";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v38 = "texStaticDepthShadow";
          goto LABEL_135;
        case 142:
          Undefined_ref_91D288(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Common";
          sub_6091D420(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "cDepthTexture";
          goto LABEL_129;
        case 143:
          Undefined_ref_91D288(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Common";
          sub_6091D420(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcShadowBuffer";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "cAoBuffer";
          goto LABEL_129;
        case 144:
        case 145:
          Undefined_ref_91CC00(v18, 7, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cW[0]";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cBP[0]";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cInvP[0]";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cRayArray[0]";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cRayParamS";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cRayParamF";
          sub_6091CD98(v18, 5, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cParamCamera";
          sub_6091CD98(v18, 6, &v51);
          Undefined_ref_91CE08(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSamplerDepth";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSamplerLinearDepth";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v27 = "cSamplerMask";
LABEL_41:
          v52 = v27;
          v21 = v18;
          v22 = 2;
          goto LABEL_16;
        case 146:
          Undefined_ref_91D288(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Common";
          sub_6091D420(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDepthTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "cTexture";
          goto LABEL_129;
        case 147:
          Undefined_ref_91D288(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Common";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Trail";
          sub_6091D420(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Counter";
          sub_6091D420(v18, 2, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDepthTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "cTexture";
          goto LABEL_129;
        case 148:
          Undefined_ref_91D288(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Common";
          sub_6091D420(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cTexture";
          goto LABEL_131;
        case 149:
          Undefined_ref_91D288(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Common";
          sub_6091D420(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "cLinearDepthTexture";
          goto LABEL_129;
        case 150:
          Undefined_ref_91D288(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Context";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "EyeParam";
          sub_6091D420(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cSunColorTable";
          goto LABEL_131;
        case 151:
          Undefined_ref_91D288(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Context";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "EyeParam";
          sub_6091D420(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 5, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColor";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDepth";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSunColorTable";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cGndColorTable";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v38 = "cGndAttnTable";
          goto LABEL_135;
        case 152:
          Undefined_ref_91CE08(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColor1";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColor2";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cGndColorTable";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cGndAttnTable";
          sub_6091CFA0(v18, 3u, (int)&v51);
          Undefined_ref_91D288(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Context";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v41 = 1;
          v42 = "Cloud";
          goto LABEL_111;
        case 153:
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureBase";
          sub_6091CFA0(v18, 0, (int)&v51);
          Undefined_ref_91CC00(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cRatio";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cViewport";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v36 = "cWeightMtx[0]";
          goto LABEL_109;
        case 154:
          Undefined_ref_91CC00(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cPVW[0]";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cWorld[0]";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v36 = "cColor";
LABEL_109:
          v52 = v36;
          v37 = v18;
          v31 = 2;
          goto LABEL_116;
        case 155:
          Undefined_ref_91D288(v18, 5, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "View";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "ShapeMask";
          sub_6091D420(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v41 = 2;
          v42 = "ShapeInfo";
LABEL_111:
          v52 = v42;
          v47 = v18;
          goto LABEL_113;
        case 156:
        case 157:
        case 158:
          Undefined_ref_91D288(v18, 5, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "View";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "PointMask";
          sub_6091D420(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "PointInfo";
          v47 = v18;
          v41 = 4;
LABEL_113:
          sub_6091D420(v47, v41, &v51);
          ++i;
          goto LABEL_7;
        case 159:
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "sTexCube";
          sub_6091CFA0(v18, 0, (int)&v51);
          Undefined_ref_91CC00(v18, 6, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTexFlipY";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCubeMapFace";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCubeMapArrayIndex";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAngleParam";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v35 = "cMipLevel";
LABEL_115:
          v52 = v35;
          v37 = v18;
          v31 = 4;
LABEL_116:
          sub_6091CD98(v37, v31, &v51);
          ++i;
          goto LABEL_7;
        case 160:
        case 161:
        case 162:
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColorCube";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLinearDepthCube";
          sub_6091CFA0(v18, 1u, (int)&v51);
          Undefined_ref_91CC00(v18, 7, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cAngleParam";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cMipLevel";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCalcSHParam";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDistanceParam";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cPointSampleWorldNormal";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNearFarParam";
          sub_6091CD98(v18, 5, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cOcclusionParam";
          sub_6091CD98(v18, 6, &v51);
          continue;
        case 163:
          Undefined_ref_91D288(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "ViewContext";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "FilterContext";
          sub_6091D420(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "ReflectionContext";
          sub_6091D420(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 9, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cViewNormalTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLinearDepthTexture";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v40 = "cRoughnessTexture";
          goto LABEL_133;
        case 164:
        case 165:
          Undefined_ref_91D288(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "FilterContext";
          sub_6091D420(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 9, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cViewNormalTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLinearDepthTexture";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v28 = "cFilterInputTexture";
LABEL_43:
          v52 = v28;
          v21 = v18;
          v22 = 5;
          goto LABEL_16;
        case 166:
          Undefined_ref_91D288(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "ViewContext";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "FilterContext";
          sub_6091D420(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 9, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cViewNormalTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLinearDepthTexture";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v34 = "cFilterInputTexture";
          goto LABEL_120;
        case 167:
        case 168:
        case 170:
          Undefined_ref_91D288(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "ViewContext";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "ReflectionContext";
          sub_6091D420(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "FilterContext";
          sub_6091D420(v18, 2, &v51);
          Undefined_ref_91CE08(v18, 9, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cViewNormalTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLinearDepthTexture";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColorTexture";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cReflectionCacheTexture";
          sub_6091CFA0(v18, 4u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cJitteredTexture";
          sub_6091CFA0(v18, 6u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cRoughnessTexture";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v25 = "cReflectionHistoryTexture";
LABEL_31:
          v52 = v25;
          v21 = v18;
          v22 = 7;
          goto LABEL_16;
        case 169:
          Undefined_ref_91D288(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "FilterContext";
          sub_6091D420(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 9, v50);
          v51 = &sead__SafeStringBase__vtable;
          v34 = "cFilterInputTexture";
LABEL_120:
          v52 = v34;
          v43 = v18;
          v44 = 5;
          goto LABEL_6;
        case 171:
        case 172:
        case 173:
          Undefined_ref_91D288(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "DebugContext";
          sub_6091D420(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLightTexture0";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLightTexture1";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLightTexture2";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v26 = "cLightTexture3";
          goto LABEL_33;
        case 174:
        case 175:
          Undefined_ref_91D288(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "VoxelContext";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "ProbeContext";
          sub_6091D420(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 7, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cViewNormalTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLinearDepthTexture";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLightTexture0";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLightTexture1";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLightTexture2";
          sub_6091CFA0(v18, 4u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLightTexture3";
          sub_6091CFA0(v18, 5u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v22 = 6;
          v29 = "cNormalCubeMapTexture";
LABEL_45:
          v52 = v29;
          v21 = v18;
          goto LABEL_16;
        case 176:
        case 177:
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v30 = "cSHTexture";
LABEL_47:
          v52 = v30;
          v21 = v18;
          v22 = 0;
          goto LABEL_16;
        case 178:
          Undefined_ref_91CC00(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cPointInfoArray";
          sub_6091CD98(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cSHTexture";
          goto LABEL_131;
        case 179:
          Undefined_ref_91CC00(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSHParam3";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cPointInfoArray";
          sub_6091CD98(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cSHTexture";
          goto LABEL_131;
        case 180:
          Undefined_ref_91CC00(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSrcSHParam3";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSliceParam";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cRectInfoArray";
          sub_6091CD98(v18, 2, &v51);
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSHTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "cLightTexture3";
          goto LABEL_129;
        case 181:
          Undefined_ref_91CC00(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCopyRectInfoArray";
          sub_6091CD98(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cTexture3d_0";
          goto LABEL_131;
        case 182:
          Undefined_ref_91CC00(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCopyRectInfoArray";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCopyParam";
          sub_6091CD98(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cTexture3d_0";
          goto LABEL_131;
        case 183:
          Undefined_ref_91CC00(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cCopyRectInfoArray";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cUpdateParam";
          sub_6091CD98(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLightTexture0";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLightTexture1";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLightTexture2";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v44 = 3;
          v45 = "cLightTexture3";
LABEL_127:
          v52 = v45;
          v43 = v18;
          goto LABEL_6;
        case 184:
          Undefined_ref_91CE08(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNormal";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v39 = "cSrcSamplerCube";
LABEL_129:
          v52 = v39;
          v43 = v18;
          v44 = 1;
          goto LABEL_6;
        case 185:
          Undefined_ref_91CC00(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNearFarParam";
          sub_6091CD98(v18, 0, &v51);
          Undefined_ref_91CE08(v18, 1, v50);
          v51 = &sead__SafeStringBase__vtable;
          v33 = "cNonLinearDepthTexture";
LABEL_131:
          v52 = v33;
          v43 = v18;
          v44 = 0;
          goto LABEL_6;
        case 186:
          Undefined_ref_91CC00(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cInvTexSize";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cVarianceMax";
          sub_6091CD98(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 3, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureColor";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cTextureDepth";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v40 = "cTextureLinearDepth";
LABEL_133:
          v52 = v40;
          v43 = v18;
          v44 = 2;
          goto LABEL_6;
        case 187:
          Undefined_ref_91D288(v18, 2, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "View";
          sub_6091D420(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "Common";
          sub_6091D420(v18, 1, &v51);
          Undefined_ref_91CE08(v18, 5, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cBaseTexture";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNoiseTexture";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cBaseTexture_Blend";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cNoiseTexture_Blend";
          sub_6091CFA0(v18, 3u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v38 = "cScatterTexture";
LABEL_135:
          v52 = v38;
          v43 = v18;
          v44 = 4;
LABEL_6:
          sub_6091CFA0(v43, v44, (int)&v51);
          ++i;
          goto LABEL_7;
        case 188:
        case 189:
        case 190:
        case 191:
        case 192:
          Undefined_ref_91CC00(v18, 12, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cArrayIndex";
          sub_6091CD98(v18, 0, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cSizeRCP";
          sub_6091CD98(v18, 9, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cViewInvMtx[0]";
          sub_6091CD98(v18, 1, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLayerTrans";
          sub_6091CD98(v18, 2, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLayerRenderInfo";
          sub_6091CD98(v18, 3, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cLayerNum";
          sub_6091CD98(v18, 4, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cHeightAttenuation";
          sub_6091CD98(v18, 5, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDepthShadowProj[0]";
          sub_6091CD98(v18, 6, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDepthShadowLength[0]";
          sub_6091CD98(v18, 7, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDepthShadowAmplifier";
          sub_6091CD98(v18, 8, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cViewProjMtx[0]";
          sub_6091CD98(v18, 10, &v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cColor";
          sub_6091CD98(v18, 11, &v51);
          Undefined_ref_91CE08(v18, 4, v50);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDepthTex";
          sub_6091CFA0(v18, 0, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cDepthShadowTex";
          sub_6091CFA0(v18, 1u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v52 = "cMaskTex";
          sub_6091CFA0(v18, 2u, (int)&v51);
          v51 = &sead__SafeStringBase__vtable;
          v26 = "cVolumeTex";
LABEL_33:
          v52 = v26;
          v21 = v18;
          v22 = 3;
LABEL_16:
          sub_6091CFA0(v21, v22, (int)&v51);
          continue;
        default:
          continue;
      }
    }
    v23 = v14[5];
    if ( v23 < v14[6] )
    {
      *(_DWORD *)(v14[7] + 4 * v23) = 0;
      ++v14[5];
    }
  }
  if ( v14[266] || v14[267] )
    sub_60972BA8(v14 + 261, v50);
  if ( v14[242] || v14[243] )
    sub_6097276C(v14 + 237, v50);
  if ( v14[218] || v14[219] )
    sub_6091F558(v14 + 213);
  if ( v14[242] || v14[243] )
    sub_6091F558(v14 + 237);
  if ( v14[266] || v14[267] )
    sub_6091F558(v14 + 261);
  if ( v14[290] || v14[291] )
    sub_6091F558(v14 + 285);
  if ( v14[314] || v14[315] )
    sub_6091F558(v14 + 309);
  if ( v14[338] || v14[339] )
    sub_6091F558(v14 + 333);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v50 + 20))(v50);
}
