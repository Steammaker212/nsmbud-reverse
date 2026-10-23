/* sub_6052A144
 * address: 0x6052A144   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052A144(int *a1)
{
  int v1; // r3

  v1 = 9999;
  if ( a1[13] < 9999 )
    v1 = a1[13];
  a1[14] = v1;
  return sub_6047E0EC(&dword_60CAA27C, a1[10], 1);
}
