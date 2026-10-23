/* sub_603A849C
 * address: 0x603A849C   size: 1200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A849C(int a1)
{
  int v2; // r1
  int v3; // r5
  unsigned int v4; // r0
  unsigned int v5; // r2
  int v6; // r1
  int *v8; // r9
  unsigned int v9; // r1
  unsigned int *v10; // r6
  int v11; // r7
  int v12; // r5

  v2 = 32;
  v3 = 2;
  v4 = FIELD_U32(a1, 24);
  if ( FIELD_U8(dword_60C99DD4, 194) )
    v2 = 16;
  if ( (v2 & v4) == 0 )
  {
    v5 = FIELD_U32(a1, 20);
    v6 = dword_60C97854;
    if ( dword_60C97854 >= 1 && (v5 & 0xFF000) != 0 )
    {
      FIELD_U8(a1, 19) = 1;
      return 2;
    }
    FIELD_F32(a1, 23572) = (float)((float)((v5 >> 26) & 3) + 1.0) * 16.0;
    dword_60C97854 = v6 + 1;
    FIELD_U32(a1, 23568) = (v5 & 0xF) + 2;
    v8 = (int *)(a1 + 23568);
    v9 = (v4 >> 20) & 1;
    FIELD_U32(a1, 23596) = v9;
    v10 = (unsigned int *)(a1 + 23596);
    FIELD_U32(a1, 23608) = (v5 >> 20) & 0xF;
    if ( (v5 & 0xF0000000) == 0x40000000 )
    {
      FIELD_U8(a1, 23612) = 1;
      FIELD_U32(a1, 23616) = HIBYTE(v4);
    }
    if ( !FIELD_U32(a1, 7032) )
      FIELD_U32(a1, 7032) = a1;
    if ( !FIELD_U32(a1, 7824) )
      FIELD_U32(a1, 7824) = a1;
    block_snake_ice_ref(a1 + 6304, v9);
    block_snake_ice_ref(a1 + 7096, *v10);
    if ( *v8 >= 1 )
    {
      v11 = 0;
      v12 = a1 + 7888;
      do
      {
        if ( !FIELD_U32(v12, 728) )
          FIELD_U32(v12, 728) = a1;
        block_snake_ice_ref(v12, *v10);
        ++v11;
        v12 += 784;
      }
      while ( v11 < *v8 );
    }
    sub_603A9110(a1);
    sub_603A8968(a1);
    FIELD_U32(a1, 23592) = *(&off_60BF4760 + (FIELD_U32(a1, 20) >> 28));
    if ( (FIELD_U8(a1, 24) & 0x20) != 0 )
    {
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C97938);
    }
    else if ( (FIELD_U32(a1, 23608) | 2) == 2 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C97858);
    }
    else
    {
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C97878);
      FIELD_U32(a1, 492) = 0;
      FIELD_U32(a1, 496) = 0;
      FIELD_U32(a1, 500) = 1149239296;
      FIELD_U32(a1, 504) = 1115684864;
    }
    v3 = 1;
    FIELD_U32(a1, 8552) = 0;
    FIELD_U32(a1, 8040) = a1;
    FIELD_U32(a1, 8232) = a1 + 23928;
    FIELD_U32(a1, 9336) = 1;
    FIELD_U32(a1, 8824) = a1;
    FIELD_U32(a1, 9016) = a1 + 23928;
    FIELD_U32(a1, 10120) = 2;
    FIELD_U32(a1, 9608) = a1;
    FIELD_U32(a1, 9800) = a1 + 23928;
    FIELD_U32(a1, 10904) = 3;
    FIELD_U32(a1, 10392) = a1;
    FIELD_U32(a1, 10584) = a1 + 23928;
    FIELD_U32(a1, 11688) = 4;
    FIELD_U32(a1, 11176) = a1;
    FIELD_U32(a1, 11368) = a1 + 23928;
    FIELD_U32(a1, 12472) = 5;
    FIELD_U32(a1, 11960) = a1;
    FIELD_U32(a1, 12152) = a1 + 23928;
    FIELD_U32(a1, 13256) = 6;
    FIELD_U32(a1, 12744) = a1;
    FIELD_U32(a1, 12936) = a1 + 23928;
    FIELD_U32(a1, 14040) = 7;
    FIELD_U32(a1, 13528) = a1;
    FIELD_U32(a1, 13720) = a1 + 23928;
    FIELD_U32(a1, 14824) = 8;
    FIELD_U32(a1, 14312) = a1;
    FIELD_U32(a1, 14504) = a1 + 23928;
    FIELD_U32(a1, 15608) = 9;
    FIELD_U32(a1, 15096) = a1;
    FIELD_U32(a1, 15288) = a1 + 23928;
    FIELD_U32(a1, 16392) = 10;
    FIELD_U32(a1, 15880) = a1;
    FIELD_U32(a1, 16072) = a1 + 23928;
    FIELD_U32(a1, 17176) = 11;
    FIELD_U32(a1, 16664) = a1;
    FIELD_U32(a1, 16856) = a1 + 23928;
    FIELD_U32(a1, 17960) = 12;
    FIELD_U32(a1, 17448) = a1;
    FIELD_U32(a1, 17640) = a1 + 23928;
    FIELD_U32(a1, 18744) = 13;
    FIELD_U32(a1, 18232) = a1;
    FIELD_U32(a1, 18424) = a1 + 23928;
    FIELD_U32(a1, 19528) = 14;
    FIELD_U32(a1, 19016) = a1;
    FIELD_U32(a1, 19208) = a1 + 23928;
    FIELD_U32(a1, 20312) = 15;
    FIELD_U32(a1, 19800) = a1;
    FIELD_U32(a1, 19992) = a1 + 23928;
    FIELD_U32(a1, 21096) = 16;
    FIELD_U32(a1, 20584) = a1;
    FIELD_U32(a1, 20776) = a1 + 23928;
    FIELD_U32(a1, 21880) = 17;
    FIELD_U32(a1, 21368) = a1;
    FIELD_U32(a1, 21560) = a1 + 23928;
    FIELD_U32(a1, 22664) = 18;
    FIELD_U32(a1, 22152) = a1;
    FIELD_U32(a1, 22344) = a1 + 23928;
    FIELD_U32(a1, 23448) = 19;
    FIELD_U32(a1, 22936) = a1;
    FIELD_U32(a1, 23128) = a1 + 23928;
    FIELD_U32(a1, 6968) = 20;
    FIELD_U32(a1, 6456) = a1;
    FIELD_U32(a1, 6648) = a1 + 23928;
    FIELD_U32(a1, 7760) = 21;
    FIELD_U32(a1, 7248) = a1;
    FIELD_U32(a1, 7440) = a1 + 23928;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
  }
  return v3;
}
