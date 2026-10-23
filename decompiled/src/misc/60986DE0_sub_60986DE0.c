/* sub_60986DE0
 * address: 0x60986DE0   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60986DE0(int a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v8; // r5
  int result; // r0

  v8 = (_DWORD *)operator_new_8DE25C(0x2Cu, a2, 4);
  sead__IDisposer__ctor(v8, a2, 1u);
  *v8 = off_60C5FDD4;
  v8[4] = 0;
  v8[5] = 0;
  sub_6098D9A0(v8 + 6);
  v8[7] = 0;
  v8[8] = 0;
  v8[9] = a1;
  v8[10] = 0;
  (*(void (__fastcall **)(_DWORD *, _DWORD *, int, int))(*v8 + 16))(v8, a2, a3, a4);
  sub_608DE510(a1 + 20, (_DWORD *)((char *)v8 + FIELD_U32(a1, 32)));
  result = FIELD_U32(a1, 28) + 1;
  FIELD_U32(a1, 28) = result;
  return result;
}
