/* sub_6039DEF4
 * address: 0x6039DEF4   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039DEF4(int a1, int a2)
{
  unsigned int v2; // r3
  _DWORD *v3; // r1
  int v4; // r12
  int v6; // r1
  int v7; // r2
  _BYTE *v8; // r4

  v2 = FIELD_U32(a1, 6452);
  if ( v2 >= 2 )
    v2 = 0;
  v3 = (_DWORD *)(a2 + 8 * v2);
  v4 = v3[1];
  switch ( *v3 )
  {
    case 3:
      FIELD_U32(dword_60C96478, 100) = 4;
      (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C97260);
      return 1;
    case 8:
      FIELD_U8(a1, 6397) = 1;
      return 0;
    case 0x14:
      v6 = (unsigned __int16)v4;
      v7 = 6408;
      goto LABEL_10;
    case 0x18:
      v8 = (_BYTE *)(a1 + 6521);
      (*(void (__fastcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 72))(
        a1,
        *(_DWORD *)(*(_DWORD *)a1 + 72),
        0,
        *v3 - 3);
      *v8 = 1;
      return 0;
    case 0x19:
      v6 = (unsigned __int16)v4;
      v7 = 6528;
      goto LABEL_10;
    case 0x1A:
      v6 = (unsigned __int16)v4;
      v7 = 6532;
LABEL_10:
      *(_DWORD *)(a1 + v7) = v6;
      break;
    default:
      return 0;
  }
  return 0;
}
