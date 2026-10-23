/* sub_6074EC10
 * address: 0x6074EC10   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6074EC10(int a1, const char **a2, unsigned int a3)
{
  nn__prepo__PlayReport *v5; // r6

  if ( !FIELD_U8(a1, 16) )
    return 0;
  v5 = *(nn__prepo__PlayReport **)(a1 + 64);
  (*((void (__fastcall **)(const char **))*a2 + 3))(a2);
  return nn__prepo__PlayReport__Add(v5, a2[1], a3) == 0;
}
