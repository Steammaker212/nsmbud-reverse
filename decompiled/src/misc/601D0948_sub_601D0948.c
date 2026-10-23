/* sub_601D0948
 * address: 0x601D0948   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D0948(int a1)
{
  _BOOL4 v2; // r5
  _BOOL4 v3; // r6
  int v4; // r0
  int v5; // r0
  int v7; // [sp+0h] [bp-18h] BYREF
  int v8; // [sp+4h] [bp-14h] BYREF

  sub_601FF484(dword_60C8C188);
  v8 = 1024;
  v2 = 0;
  v3 = 0;
  if ( sub_601CFB8C(a1, &v8, 1) == 1 )
  {
    v4 = sub_601FF340(dword_60C8C188, 0);
    v3 = (FIELD_U32(v4, 4) & v8) != 0;
  }
  v7 = 2048;
  if ( sub_601CFB8C(a1, &v7, 1) == 1 )
  {
    v5 = sub_601FF340(dword_60C8C188, 0);
    v2 = (FIELD_U32(v5, 4) & v7) != 0;
  }
  return v3 || v2;
}
