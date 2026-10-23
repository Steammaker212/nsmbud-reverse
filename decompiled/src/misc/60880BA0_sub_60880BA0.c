/* sub_60880BA0
 * address: 0x60880BA0   size: 776   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60880BA0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *v10; // r10
  int v11; // r7
  bool v12; // zf
  int v13; // r0
  int v14; // r6
  int v15; // r4
  int v16; // r5
  __int64 v17; // d16
  __int64 v18; // d17
  void (__fastcall *v19)(_DWORD *); // r1
  int v21; // [sp+4h] [bp-54h]
  _DWORD v22[20]; // [sp+8h] [bp-50h] BYREF

  v10 = *(_DWORD **)(a1 + 24);
  v11 = *(_DWORD *)(v10[26] + 4 * a4);
  v12 = v11 == 0;
  if ( v11 )
    v12 = FIELD_U8(v11, 5) == 0;
  if ( v12 )
  {
    debugPrintRelated3("The Resource is not found in VfxSystem. ResourceId : %d.\n");
    return 0;
  }
  *(_DWORD *)a1 = FIELD_U32(v11, 8);
  if ( FIELD_U32(v11, 40) <= a2 )
  {
    FIELD_U32(a1, 516) = 0;
LABEL_10:
    debugPrintRelated3("The EmitterSet is not found in this resource. EmitterSet Id : %d. ResourceId : %d\n");
    return 0;
  }
  v13 = *(_DWORD *)(FIELD_U32(v11, 52) + 4 * a2);
  if ( v13 )
  {
    FIELD_U32(a1, 516) = v13;
    goto LABEL_12;
  }
  v13 = FIELD_U32(v11, 48) + 32 * a2;
  FIELD_U32(a1, 516) = v13;
  if ( !v13 )
    goto LABEL_10;
LABEL_12:
  v14 = FIELD_U32(v13, 16);
  if ( v14 )
  {
    v21 = a3;
    while ( ShaderBinary_Bind_Error_ref(v14, v11) == 1 )
    {
      if ( FIELD_S32(v14, 84) >= 1 )
      {
        v15 = 0;
        while ( ShaderBinary_Bind_Error_ref(*(_DWORD *)(v14 + 88 + 4 * v15), v11) )
        {
          if ( ++v15 >= FIELD_U32(v14, 84) )
            goto LABEL_19;
        }
        break;
      }
LABEL_19:
      v14 = FIELD_U32(v14, 152);
      if ( !v14 )
      {
        v10 = *(_DWORD **)(a1 + 24);
        a3 = v21;
        goto LABEL_21;
      }
    }
    debugPrintRelated3("EmitterResource Setup Failed.\n");
    return 0;
  }
LABEL_21:
  FIELD_U32(a1, 28) = a2;
  FIELD_U32(a1, 32) = a3;
  FIELD_U32(a1, 36) = a4;
  v16 = 1;
  FIELD_U32(a1, 16) = a5;
  FIELD_U8(a1, 12) = 0x80;
  FIELD_U32(a1, 416) = 0;
  FIELD_U32(a1, 420) = 0;
  FIELD_U16(a1, 4) = 0;
  FIELD_U8(a1, 544) = 0;
  FIELD_U32(a1, 332) = 0;
  FIELD_U32(a1, 328) = 0;
  FIELD_U32(a1, 324) = 0;
  FIELD_U32(a1, 320) = 0;
  FIELD_U8(a1, 545) = 1;
  FIELD_U8(a1, 7) = 1;
  FIELD_U8(a1, 6) = 1;
  FIELD_U8(a1, 9) = 0;
  FIELD_U8(a1, 11) = 0;
  FIELD_U32(a1, 424) = a7;
  FIELD_U32(a1, 512) = 0;
  FIELD_U32(a1, 340) = 0;
  FIELD_U32(a1, 408) = 0;
  FIELD_U32(a1, 412) = 0;
  FIELD_U32(a1, 44) = 0;
  FIELD_U64(a1, 208) = 0x3F8000003F800000LL;
  FIELD_U64(a1, 216) = 1065353216;
  FIELD_U64(a1, 224) = 0x3F8000003F800000LL;
  FIELD_U64(a1, 232) = 1065353216;
  FIELD_U64(a1, 304) = 0x3F8000003F800000LL;
  FIELD_U64(a1, 312) = 1065353216;
  FIELD_U64(a1, 256) = 0;
  FIELD_U64(a1, 264) = 0;
  FIELD_U32(a1, 480) = 1065353216;
  FIELD_U64(a1, 496) = 0;
  FIELD_U64(a1, 504) = 0;
  FIELD_U32(a1, 60) = -1;
  memset((void *)(a1 + 348), 0, 60);
  FIELD_U32(a1, 68) = 1065353216;
  FIELD_U32(a1, 72) = 1065353216;
  FIELD_U32(a1, 76) = 1065353216;
  FIELD_U32(a1, 48) = 0;
  FIELD_U32(a1, 52) = 0;
  FIELD_U8(a1, 10) = 0;
  FIELD_U32(a1, 536) = 0;
  FIELD_U32(a1, 64) = 1065353216;
  FIELD_U32(a1, 520) = v10[568];
  FIELD_U32(a1, 524) = v10[569];
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 56) = a6;
  FIELD_U32(a1, 528) = 0;
  FIELD_U64(a1, 80) = 1065353216;
  FIELD_U64(a1, 88) = 0;
  FIELD_U64(a1, 96) = 0x3F80000000000000LL;
  FIELD_U64(a1, 104) = 0;
  FIELD_U64(a1, 112) = 0;
  FIELD_U64(a1, 120) = 1065353216;
  FIELD_U64(a1, 128) = 0;
  FIELD_U64(a1, 136) = 0;
  FIELD_U64(a1, 144) = 1065353216;
  FIELD_U64(a1, 152) = 0;
  FIELD_U64(a1, 160) = 0x3F80000000000000LL;
  FIELD_U64(a1, 168) = 0;
  FIELD_U64(a1, 176) = 0;
  FIELD_U64(a1, 184) = 1065353216;
  FIELD_U64(a1, 192) = 0;
  FIELD_U64(a1, 200) = 0;
  sub_60880F00(a1);
  *(float *)&v17 = 1.0;
  *((float *)&v17 + 1) = 1.0;
  *(float *)&v18 = 1.0;
  *((float *)&v18 + 1) = 1.0;
  FIELD_U64(a1, 240) = v17;
  FIELD_U64(a1, 248) = v18;
  FIELD_U64(a1, 272) = 0x3F8000003F800000LL;
  FIELD_U64(a1, 280) = 1065353216;
  FIELD_U64(a1, 288) = 0x3F8000003F800000LL;
  FIELD_U64(a1, 296) = 1065353216;
  FIELD_U32(a1, 480) = 1065353216;
  FIELD_U32(a1, 428) = 1065353216;
  FIELD_U32(a1, 432) = 1065353216;
  FIELD_U64(a1, 448) = 0;
  FIELD_U64(a1, 456) = 0;
  FIELD_U32(a1, 20) = 1;
  v19 = *(void (__fastcall **)(_DWORD *))(a1 + 520);
  if ( v19 )
  {
    v22[0] = FIELD_U32(a1, 24);
    v22[1] = a1;
    v19(v22);
  }
  return v16;
}
