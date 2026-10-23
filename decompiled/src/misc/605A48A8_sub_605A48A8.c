/* sub_605A48A8
 * address: 0x605A48A8   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A48A8(__int64 a1)
{
  int v1; // r1
  unsigned __int8 *v2; // r6
  int v3; // r4
  unsigned int v4; // r2
  float v5; // s2
  float v6; // s0
  int v7; // r0
  int v8; // r3
  __int64 v9; // r0

  WORD2(a1) = 6786;
  HIWORD(a1) = 1;
  v2 = (unsigned __int8 *)(a1 + HIDWORD(a1));
  v1 = *(unsigned __int8 *)(a1 + HIDWORD(a1));
  v3 = v1 - 33;
  v4 = 1u >> (33 - v1);
  HIDWORD(a1) = 1 << (v1 - 1);
  if ( v3 >= 0 )
  {
    v4 = 1 << v3;
    HIDWORD(a1) = 0;
  }
  if ( HIDWORD(a1) & FIELD_U32(EventMgr__instance, 16) | v4 & FIELD_U32(EventMgr__instance, 20) )
  {
    v5 = FIELD_F32(a1, 6876) + -2.0;
    FIELD_F32(a1, 6876) = v5;
    v6 = v5 + FIELD_F32(a1, 112);
    FIELD_F32(a1, 6844) = v6;
    FIELD_U32(a1, 6308) = 0;
    FIELD_F32(a1, 6312) = v5;
    if ( (FIELD_U8(a1, 21) & 8) == 0 && FIELD_U8(a1, 6894) )
      FIELD_F32(a1, 6916) = v6;
    FIELD_F32(a1, 6128) = v6;
    FIELD_F32(a1, 6860) = (float)(v6 + FIELD_F32(a1, 6856)) - FIELD_F32(a1, 6116);
    if ( !FIELD_U32(a1, 6836) )
    {
      FIELD_F32(TileMgr_instance, 24) = v6;
      v6 = FIELD_F32(a1, 6844);
    }
    if ( v6 < (float)(FIELD_F32(dword_60CC6484, 132) + -80.0) )
    {
      (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CAFEC8);
      v7 = *v2;
      v8 = v7 - 33;
      HIDWORD(v9) = 1u >> (33 - v7);
      LODWORD(v9) = 1 << (v7 - 1);
      if ( v8 >= 0 )
      {
        HIDWORD(v9) = 1 << v8;
        LODWORD(v9) = 0;
      }
      a1 = FIELD_U64(EventMgr__instance, 16) & ~v9;
      FIELD_U64(EventMgr__instance, 16) = a1;
    }
  }
  return a1;
}
