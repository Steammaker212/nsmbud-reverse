/* sub_6005EAFC
 * address: 0x6005EAFC   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005EAFC(int *a1, int a2)
{
  _BOOL4 v4; // r4
  int *v5; // r0
  _BOOL4 v6; // r6
  int v7; // r0
  _BOOL4 v8; // r0
  int v10; // [sp+0h] [bp-20h] BYREF
  int target[7]; // [sp+4h] [bp-1Ch] BYREF

  target[0] = 0;
  v10 = dword_60C80F20;
  v4 = moveValueTo(a1 + 39, target, &v10);
  v5 = a1 + 40;
  if ( a2 )
  {
    target[0] = -dword_60C80F0C;
    v10 = dword_60C80F24;
    v6 = moveValueTo(v5, target, &v10);
    v7 = -dword_60C80F10;
  }
  else
  {
    target[0] = dword_60C80F0C;
    v10 = dword_60C80F24;
    v6 = moveValueTo(v5, target, &v10);
    v7 = dword_60C80F10;
  }
  target[0] = v7;
  v10 = dword_60C80F28;
  v8 = moveValueTo(a1 + 41, target, &v10);
  return v4 && v6 && v8;
}
