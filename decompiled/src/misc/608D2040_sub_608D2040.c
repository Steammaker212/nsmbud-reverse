/* sub_608D2040
 * address: 0x608D2040   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D2040(int a1, int a2)
{
  int v4; // r5
  int v5; // r0
  _DWORD *v6; // r5
  _DWORD *v7; // r0

  v4 = a1 + 124;
  nn__os__LockMutex(a1 + 124);
  FIELD_U8(a1, 146) = 0;
  v5 = FIELD_U32(a1, 52);
  if ( v5 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v5 + 12))(v5, -1);
  FIELD_U32(a1, 52) = a2;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a2 + 12))(a2, 1);
  nn__os__UnlockMutex(v4);
  v6 = sub_608C3B10();
  v7 = (_DWORD *)sub_608C2698((int)v6, 20);
  v7[1] = 74;
  v7[4] = a1;
  sub_608C2C1C(v6, v7);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 12))(a1, 1);
}
