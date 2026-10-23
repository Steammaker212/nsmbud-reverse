/* sub_600CB5EC
 * address: 0x600CB5EC   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CB5EC(int a1)
{
  int v2; // r8
  _DWORD **v3; // r4

  FIELD_U32(a1, 144) = 1063675494;
  v2 = a1 + 144;
  FIELD_U32(a1, 148) = 1063675494;
  FIELD_U32(a1, 152) = 1063675494;
  sub_600CB6D4(a1);
  if ( FIELD_U32(a1, 6304) )
  {
    v3 = (_DWORD **)(a1 + 6300);
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6300) + 60))(**(_DWORD **)(a1 + 6300));
    (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v3 + 68))(**v3, v2);
    sub_604218E0(*(_DWORD **)(a1 + 6300));
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v3 + 52))(**v3);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v3 + 56))(**v3);
  }
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C83FDC);
  return 1;
}
