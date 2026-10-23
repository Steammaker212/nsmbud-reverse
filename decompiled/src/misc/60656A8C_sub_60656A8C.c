/* sub_60656A8C
 * address: 0x60656A8C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60656A8C(int a1)
{
  int **v2; // r6
  int *v3; // r4

  v2 = *(int ***)(a1 + 4);
  v3 = *v2;
  (*(void (__fastcall **)(int *))(**v2 + 60))(*v2);
  Animation_update(*v2[3]);
  Animation_update(*v2[7]);
  (*(void (__fastcall **)(int *))(*v3 + 52))(v3);
  sub_60656AF4(a1, v3);
  return (*(int (__fastcall **)(int *))(*v3 + 56))(v3);
}
