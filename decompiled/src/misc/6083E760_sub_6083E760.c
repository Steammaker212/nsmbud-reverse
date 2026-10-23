/* sub_6083E760
 * address: 0x6083E760   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083E760(int a1)
{
  nn__fs *v1; // r0
  const char *v2; // r1

  v1 = (nn__fs *)MiiResource_ref(a1);
  return nn__fs__Unmount(v1, v2);
}
