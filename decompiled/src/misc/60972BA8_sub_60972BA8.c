/* sub_60972BA8
 * address: 0x60972BA8   size: 3428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60972BA8(int a1, int a2)
{
  int v2; // r1
  unsigned int v3; // r9
  char **v4; // r4
  char *v5; // r0
  unsigned int v6; // r5
  int v7; // r9
  int v8; // r0
  _DWORD *v9; // r7
  int v10; // r0
  const char *v11; // r0
  unsigned int v12; // r1
  unsigned int result; // r0
  int (**v16)(); // [sp+14Ch] [bp-2Ch] BYREF
  const char *v17; // [sp+150h] [bp-28h]

  v2 = a1;
  v3 = 0;
  v4 = &off_60C5F314;
  do
  {
    v5 = *v4;
    v6 = v3;
    v7 = v2;
    v16 = &sead__SafeStringBase__vtable;
    v17 = v5;
    v8 = sub_6091F9A0(v2, &v16);
    v9 = 0;
    if ( v8 >= 0 )
    {
      v9 = 0;
      if ( FIELD_U32(v7, 28) > (unsigned int)v8 )
        v9 = (_DWORD *)(FIELD_U32(v7, 32) + 936 * v8);
    }
    if ( v6 <= 3 )
    {
      Undefined_ref_91CE08(v9, 5, a2);
      Undefined_ref_91CC00(v9, 12, a2);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexTransmittance";
      sub_6091CFA0(v9, 0, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexDeltaE";
      sub_6091CFA0(v9, 1u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexDeltaJ";
      sub_6091CFA0(v9, 2u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexDeltaSR";
      sub_6091CFA0(v9, 3u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexDeltaSM";
      sub_6091CFA0(v9, 4u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeTransmittance";
      sub_6091CD98(v9, 0, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeIrradiance";
      sub_6091CD98(v9, 1u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeViewZenithAngle";
      sub_6091CD98(v9, 4u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeSunZenithAngle";
      sub_6091CD98(v9, 3u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeSunViewAngle";
      sub_6091CD98(v9, 5u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeAltitude";
      sub_6091CD98(v9, 2u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cScatteringCoeffRayleigh";
      sub_6091CD98(v9, 6u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cScatteringCoeffMie";
      sub_6091CD98(v9, 7u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSymmetricalPropertyMie";
      sub_6091CD98(v9, 8u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cHeightRayleigh";
      sub_6091CD98(v9, 9u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cHeightMie";
      sub_6091CD98(v9, 0xAu, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cNonLinearParam";
      sub_6091CD98(v9, 0xBu, (int)&v16);
    }
    v10 = (int)*(v4 - 2);
    if ( (unsigned int)(v10 - 4) >= 5 )
    {
      result = v10 - 9;
      if ( result >= 2 )
        goto LABEL_12;
      Undefined_ref_91CE08(v9, 9, a2);
      Undefined_ref_91CC00(v9, 26, a2);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexColor";
      sub_6091CFA0(v9, 0, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexDepth";
      sub_6091CFA0(v9, 1u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexTransmittance";
      sub_6091CFA0(v9, 2u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexIrradiance";
      sub_6091CFA0(v9, 3u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexInscatter";
      sub_6091CFA0(v9, 4u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexBakedInscatter";
      sub_6091CFA0(v9, 5u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexBakedIrradiance";
      sub_6091CFA0(v9, 6u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexBakedRangeTransmittance";
      sub_6091CFA0(v9, 7u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexCloud";
      sub_6091CFA0(v9, 8u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeTransmittance";
      sub_6091CD98(v9, 1u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeIrradiance";
      sub_6091CD98(v9, 2u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeViewZenithAngle";
      sub_6091CD98(v9, 5u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeSunZenithAngle";
      sub_6091CD98(v9, 4u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeSunViewAngle";
      sub_6091CD98(v9, 6u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeAltitude";
      sub_6091CD98(v9, 3u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cScatteringCoeffRayleigh";
      sub_6091CD98(v9, 7u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cScatteringCoeffMie";
      sub_6091CD98(v9, 8u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSymmetricalPropertyMie";
      sub_6091CD98(v9, 9u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cAmplifierReyleigh";
      sub_6091CD98(v9, 0xAu, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cAmplifierMie";
      sub_6091CD98(v9, 0xBu, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cAmplifierAdhoc";
      sub_6091CD98(v9, 0xCu, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cProjInverse[0]";
      sub_6091CD98(v9, 0xDu, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cViewInverse[0]";
      sub_6091CD98(v9, 0xEu, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSunDir";
      sub_6091CD98(v9, 0xFu, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSunColor";
      sub_6091CD98(v9, 0x10u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cGroundColor";
      sub_6091CD98(v9, 0x11u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cNearFar";
      sub_6091CD98(v9, 0x12u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSunInfo";
      sub_6091CD98(v9, 0x13u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cScatterFogDistance";
      sub_6091CD98(v9, 0x14u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cScatterFogCoeff";
      sub_6091CD98(v9, 0x15u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cNormalFogDistance";
      sub_6091CD98(v9, 0x16u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cNormalFogCoeff";
      sub_6091CD98(v9, 0x17u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cNormalFogColor";
      sub_6091CD98(v9, 0x18u, (int)&v16);
      v11 = "cCloudParam";
      v16 = &sead__SafeStringBase__vtable;
      v12 = 25;
    }
    else
    {
      Undefined_ref_91CE08(v9, 7, a2);
      Undefined_ref_91CC00(v9, 19, a2);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexDeltaE";
      sub_6091CFA0(v9, 0, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexDeltaJ";
      sub_6091CFA0(v9, 1u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexDeltaSR";
      sub_6091CFA0(v9, 2u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexDeltaSM";
      sub_6091CFA0(v9, 3u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexInscatter";
      sub_6091CFA0(v9, 4u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexTransmittance";
      sub_6091CFA0(v9, 6u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cTexIrradiance";
      sub_6091CFA0(v9, 5u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeBakedInscatter";
      sub_6091CD98(v9, 1u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeBakedRangeTransmittance";
      sub_6091CD98(v9, 2u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeIrradiance";
      sub_6091CD98(v9, 0, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeViewZenithAngle";
      sub_6091CD98(v9, 5u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeSunZenithAngle";
      sub_6091CD98(v9, 4u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeSunViewAngle";
      sub_6091CD98(v9, 6u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSizeAltitude";
      sub_6091CD98(v9, 3u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cScatteringCoeffRayleigh";
      sub_6091CD98(v9, 7u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cScatteringCoeffMie";
      sub_6091CD98(v9, 8u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cAmplifierReyleigh";
      sub_6091CD98(v9, 9u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cAmplifierMie";
      sub_6091CD98(v9, 0xAu, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSymmetricalPropertyMie";
      sub_6091CD98(v9, 0xBu, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSunZenithAngle";
      sub_6091CD98(v9, 0xCu, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cSunColor";
      sub_6091CD98(v9, 0xDu, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cFade";
      sub_6091CD98(v9, 0xEu, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cNonLinearParam";
      sub_6091CD98(v9, 0xFu, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cNearFar";
      sub_6091CD98(v9, 0x10u, (int)&v16);
      v16 = &sead__SafeStringBase__vtable;
      v17 = "cAltitude";
      sub_6091CD98(v9, 0x11u, (int)&v16);
      v11 = "cEffectiveBelowHorizon";
      v16 = &sead__SafeStringBase__vtable;
      v12 = 18;
    }
    v17 = v11;
    result = sub_6091CD98(v9, v12, (int)&v16);
LABEL_12:
    v2 = a1;
    v3 = v6 + 1;
    v4 += 3;
  }
  while ( v6 != 10 );
  return result;
}
