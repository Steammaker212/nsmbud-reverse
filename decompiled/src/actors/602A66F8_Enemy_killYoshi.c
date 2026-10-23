/* Enemy_killYoshi
 * address: 0x602A66F8   size: 96   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Enemy_killYoshi(int a1, int a2)
{
  _BOOL4 v4; // r0
  char v5; // r1
  _DWORD v7[5]; // [sp+0h] [bp-30h] BYREF
  char v8; // [sp+14h] [bp-1Ch]
  _BOOL4 v9; // [sp+18h] [bp-18h]
  char v10; // [sp+1Ch] [bp-14h]

  v4 = sub_6000ADDC(a1, a2);
  v5 = FIELD_U8(a2, 84);
  memset(v7, 0, 16);
  v7[4] = &dword_60C90734;
  v8 = -1;
  v9 = v4;
  v10 = v5;
  return sub_602A852C(a1 + 6104, v7);
}
