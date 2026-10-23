/* sub_6045D390
 * address: 0x6045D390   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6045D390(int a1, int a2)
{
  int v4; // r6

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 4));
  v4 = **(_DWORD **)(a1 + 4);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 60))(v4, a2);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 68))(v4, a1 + 16);
  return ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 4));
}
