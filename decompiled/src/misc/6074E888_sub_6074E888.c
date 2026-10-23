/* sub_6074E888
 * address: 0x6074E888   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074E888(int a1, int a2, void *a3)
{
  int result; // r0
  nn__prepo__PlayReport *v7; // r0
  signed int v8; // r6

  result = FIELD_U8(a1, 16);
  if ( !result )
  {
    v7 = (nn__prepo__PlayReport *)operator_new_8DE25C(0x2Cu, a3, 4);
    FIELD_U32(a1, 64) = nn__prepo__PlayReport__ctor(v7);
    result = 65 * a2;
    v8 = 130 * a2 + 3;
    if ( v8 >= 1 )
    {
      result = sub_608DE334(v8, (int)a3, 4);
      if ( result )
      {
        FIELD_U32(a1, 68) = v8;
        FIELD_U32(a1, 72) = result;
        nn__prepo__PlayReport__SetBuffer(*(nn__prepo__PlayReport **)(a1 + 64), (void *)result, v8);
        FIELD_U8(a1, 16) = 1;
        return 1;
      }
    }
  }
  return result;
}
