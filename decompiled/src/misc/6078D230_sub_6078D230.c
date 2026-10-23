/* sub_6078D230
 * address: 0x6078D230   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078D230(_DWORD *a1)
{
  ModelWrapper *v2; // r0
  int result; // r0

  sub_6078D260();
  v2 = (ModelWrapper *)a1[73];
  if ( v2 )
    ModelWrapper_updateAnims(v2);
  result = a1[126] - a1[127];
  a1[126] = result;
  return result;
}
