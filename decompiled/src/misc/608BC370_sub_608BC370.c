/* sub_608BC370
 * address: 0x608BC370   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BC370(int a1, const void *a2)
{
  void *v4; // r6
  _DWORD *v5; // r7

  v4 = sub_608C3B10();
  v5 = (_DWORD *)sub_608C2698(v4, 712, 1);
  v5[1] = 51;
  v5[4] = a1 + 640;
  qmemcpy(v5 + 5, a2, 0x2ACu);
  v5[176] = FIELD_U32(a1, 584);
  v5[177] = FIELD_U32(a1, 588);
  return sub_608C2C1C(v4);
}
