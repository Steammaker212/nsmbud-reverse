/* sub_602C0660
 * address: 0x602C0660   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C0660(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r2
  int result; // r0
  int speed; // [sp+4h] [bp-Ch] BYREF

  v4 = FIELD_U8(a1, 6485);
  v2 = (_BYTE *)(a1 + 6485);
  v3 = v4;
  if ( v4 )
  {
    v5 = v3 - 1;
    if ( v5 )
      v6 = FIELD_U32(a1, 160) + dword_60C911E4;
    else
      v6 = 0;
    FIELD_U32(a1, 160) = v6;
    *v2 = v5;
  }
  speed = 0x800000;
  result = moveValueTo((int *)(a1 + 164), (int *)(a1 + 6464), &speed);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9145C);
  return result;
}
