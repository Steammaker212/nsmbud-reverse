/* sub_601606A4
 * address: 0x601606A4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601606A4(__int64 *a1, int a2)
{
  int v3; // r2
  int v4; // r0
  __int64 *v5; // r5
  int result; // r0
  _QWORD v7[3]; // [sp+0h] [bp-18h] BYREF

  v3 = *((_DWORD *)a1 + 77);
  v5 = a1 + 38;
  v4 = *((_DWORD *)a1 + 76);
  HIDWORD(v7[0]) = v3;
  LODWORD(v7[0]) = v4 & 0xFFFFFF | (a2 << 24);
  (*(void (__fastcall **)(__int64 *, _QWORD *))(*(_DWORD *)a1 + 56))(a1, v7);
  sub_60153898(ColliderMgr_instance, a1, v5, v7);
  result = v7[0];
  *v5 = v7[0];
  return result;
}
