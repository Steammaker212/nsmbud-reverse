/* sub_605A3B58
 * address: 0x605A3B58   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A3B58(int a1)
{
  float *v2; // r1
  float v3; // s2
  unsigned int v4; // r0
  float v5; // s0
  float v6; // s0
  int v7; // r7
  int v8; // r0
  _BYTE *v9; // r6
  int v10; // r3
  __int64 v11; // r0
  int v12; // r0
  bool v13; // zf
  int v14; // r1
  int v15; // r0
  int v16; // r3
  unsigned int v17; // r1
  int v18; // r0
  __int64 v19; // r6
  int v20; // r1

  v2 = (float *)(a1 + 72304);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_U32(a1, 72304) + dword_60CAFEC4;
  v5 = v3 + *(v2 - 16357);
  *(_DWORD *)v2 = v4;
  v6 = v5
     + (float)((float)(*(float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0))
                     + (float)((float)((float)(v4 & 0xFFFFFF)
                                     * *(float *)((char *)&sinLutTable[1] + ((v4 >> 20) & 0xFF0)))
                             * 0.000000059605))
             * 4.0);
  if ( (*((_BYTE *)v2 - 72283) & 8) == 0 && FIELD_U8(a1, 6894) )
    FIELD_F32(a1, 6916) = v6;
  FIELD_F32(a1, 6128) = v6;
  FIELD_F32(a1, 6860) = (float)(v6 + FIELD_F32(a1, 6856)) - FIELD_F32(a1, 6116);
  if ( !FIELD_U32(a1, 6836) )
    FIELD_F32(TileMgr_instance, 24) = v6;
  v7 = 0;
  v9 = (_BYTE *)(a1 + 72322);
  v8 = FIELD_U8(a1, 72322);
  if ( FIELD_U8(a1, 72322) )
  {
    v10 = v8 - 33;
    HIDWORD(v11) = 1u >> (33 - v8);
    LODWORD(v11) = 1 << (v8 - 1);
    if ( v10 >= 0 )
    {
      HIDWORD(v11) = 1 << v10;
      LODWORD(v11) = 0;
    }
    if ( (FIELD_U64(EventMgr__instance, 16) & v11) != 0 )
    {
      v12 = FIELD_U16(a1, 6888);
      v13 = v12 == 0;
      if ( FIELD_U16(a1, 6888) )
      {
        LOWORD(v12) = v12 - 1;
        FIELD_U16(a1, 6888) = v12;
      }
      LOWORD(v14) = 6780;
      if ( v13 )
        LOWORD(v12) = 0;
      HIWORD(v14) = 1;
      if ( *(_DWORD *)(a1 + v14) == 1 || !(_WORD)v12 )
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAFF48);
    }
    v15 = (unsigned __int8)*v9;
    if ( *v9 )
    {
      v16 = v15 - 33;
      v17 = 1u >> (33 - v15);
      v18 = 1 << (v15 - 1);
      if ( v16 >= 0 )
      {
        v17 = 1 << v16;
        v18 = 0;
      }
      v19 = FIELD_U64(EventMgr__instance, 16);
      v20 = HIDWORD(v19) & v17;
      v7 = 2;
      if ( !((unsigned int)v19 & v18 | v20) )
        v7 = 1;
    }
  }
  FIELD_U32(a1, 72316) = v7;
  return 72316;
}
