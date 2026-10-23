/* sub_60698FF4
 * address: 0x60698FF4   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60698FF4(int a1)
{
  _BYTE *v2; // r1
  int result; // r0
  int v4; // r1
  unsigned int v5; // r0
  unsigned int v6; // r1
  unsigned int *v7; // r5
  _BYTE *v8; // r3
  char v9; // r2

  if ( sub_603FD6E0(
         dword_60C99DF4,
         FIELD_U8(LevelInfo_instance, 18),
         FIELD_F32(a1, 108),
         FIELD_F32(a1, 112)) )
  {
    v2 = *(_BYTE **)(a1 + 632);
    result = 2;
    if ( v2 )
      *v2 = 1;
  }
  else
  {
    v4 = FIELD_U8(a1, 29);
    FIELD_U32(a1, 6104) = v4;
    v5 = FIELD_U32(a1, 20);
    FIELD_U32(a1, 6120) = BYTE1(v5);
    FIELD_U32(a1, 6124) = BYTE2(v5);
    FIELD_U32(a1, 6128) = HIBYTE(v5);
    v6 = sub_605854EC(dword_60CAF15C, v4, 30 * FIELD_U8(a1, 24));
    result = 2;
    if ( v6 != 256 )
    {
      FIELD_U32(a1, 6136) = v6;
      v7 = (unsigned int *)(a1 + 6136);
      v8 = (_BYTE *)(a1 + 6140);
      v9 = FIELD_U32(a1, 6120) != 0;
      FIELD_U8(a1, 6140) = v9;
      if ( FIELD_U32(a1, 6124) )
      {
        v9 |= 2u;
        *v8 = v9;
      }
      if ( FIELD_U32(a1, 6128) )
        *v8 = v9 | 4;
      FIELD_U32(a1, 6108) = sub_60585638(dword_60CAF15C, v6);
      FIELD_U32(a1, 6112) = sub_60585654(dword_60CAF15C, *v7);
      FIELD_U32(a1, 6116) = sub_60585670(dword_60CAF15C, *v7);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB9488);
      return 1;
    }
  }
  return result;
}
