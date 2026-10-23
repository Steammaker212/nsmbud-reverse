/* sub_60514114
 * address: 0x60514114   size: 796   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60514114(int a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  int *v4; // r1
  int v5; // r0
  char v6; // r12
  float v7; // s0
  int v8; // r1
  int v9; // r0
  void *v10; // r0
  int v11; // r0
  int result; // r0
  unsigned int v13; // r6
  _DWORD *v14; // r7
  int v15; // r0
  unsigned int v16; // r6
  int v17; // r0
  unsigned int v18; // r6
  int v19; // r0
  unsigned int v20; // r6
  int v21; // r0
  _DWORD v22[8]; // [sp+8h] [bp-20h] BYREF

  v3 = (_DWORD *)(a1 + 14968);
  v2 = FIELD_U32(a1, 14968);
  v22[0] = &sead__SafeStringBase__vtable;
  v22[1] = off_60C5CB34;
  if ( v2 == 2 )
  {
    v4 = &dword_60CA869C;
  }
  else
  {
    if ( v2 != 3 )
      goto LABEL_7;
    v4 = &dword_60CA8694;
  }
  sead__SafeStringBase__operator_assign((int)v22, (int)v4);
  if ( sub_6047467C((_DWORD *)(a1 + 48), 0, v22, (int)&dword_60CA868C, 1.0, 0) == 1 )
    sub_6047482C(a1 + 48, 0);
LABEL_7:
  *v3 = 3;
  v5 = sub_60834614(3);
  v8 = FIELD_U32(a1, 12924);
  if ( (FIELD_U32(v5, 492) & 0xFFFFFFFE) == 2 )
  {
    if ( v8 )
      FIELD_U8(v8, 64) &= ~1u;
    v9 = FIELD_U32(a1, 12928);
    if ( v9 )
      FIELD_U8(v9, 64) |= 1u;
    v10 = &unk_60CA8628;
  }
  else
  {
    if ( v8 )
      FIELD_U8(v8, 64) |= 1u;
    v11 = FIELD_U32(a1, 12928);
    if ( v11 )
      FIELD_U8(v11, 64) &= ~1u;
    v10 = &unk_60CA8608;
  }
  FIELD_U32(a1, 40) = v10;
  if ( !dword_60C99DD4 )
    goto LABEL_44;
  if ( ((unsigned int)&dword_60CA8680 & ~(1615938192 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CA8680) )
  {
    dword_60CA86B4 = FIELD_U32(a1, 12896);
    dword_60CA86B8 = FIELD_U32(a1, 12900);
    dword_60CA86BC = FIELD_U32(a1, 12904);
    dword_60CA86C0 = FIELD_U32(a1, 12908);
    _cxa_guard_release(&dword_60CA8680);
  }
  result = (int)&dword_60CA8680;
  v13 = dword_60CA86B4;
  if ( dword_60CA86B4 != 256 )
  {
    v14 = (_DWORD *)(a1 + 14980);
    if ( FIELD_S32(a1, 14980) >= 2 )
    {
      sub_6047EEC4(a1 + 3636, dword_60CA86B4, v7);
      v15 = a1;
      if ( v13 < 0x100 )
        v15 = a1 + v13;
      FIELD_U8(v15, 4096) = 0;
    }
    result = (int)&dword_60CA8680;
    v16 = dword_60CA86B8;
    if ( dword_60CA86B8 != 256 )
    {
      if ( *v14 - 1 >= 2 )
      {
        sub_6047EEC4(a1 + 3636, dword_60CA86B8, v7);
        v17 = a1;
        if ( v16 < 0x100 )
          v17 = a1 + v16;
        FIELD_U8(v17, 4096) = 0;
      }
      result = (int)&dword_60CA8680;
      v18 = dword_60CA86BC;
      if ( dword_60CA86BC != 256 )
      {
        if ( *v14 - 1 >= 3 )
        {
          sub_6047EEC4(a1 + 3636, dword_60CA86BC, v7);
          v19 = a1;
          if ( v18 < 0x100 )
            v19 = a1 + v18;
          FIELD_U8(v19, 4096) = 0;
        }
        result = (int)&dword_60CA8680;
        v20 = dword_60CA86C0;
        if ( dword_60CA86C0 != 256 )
        {
          if ( *v14 - 1 >= 4 )
          {
            sub_6047EEC4(a1 + 3636, dword_60CA86C0, v7);
            v21 = a1;
            if ( v20 < 0x100 )
              v21 = a1 + v20;
            FIELD_U8(v21, 4096) = 0;
          }
LABEL_44:
          FIELD_U16(a1, 14972) = 256;
          FIELD_U8(a1, 14976) = 1;
          return 14976;
        }
      }
    }
  }
  return result;
}
