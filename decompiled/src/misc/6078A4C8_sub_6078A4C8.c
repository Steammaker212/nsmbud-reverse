/* sub_6078A4C8
 * address: 0x6078A4C8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078A4C8(int a1, unsigned int a2)
{
  int v2; // r3

  v2 = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    v2 = dword_60C99DEC + 16;
  if ( a2 >= 6 )
    a2 = 0;
  return *(unsigned __int8 *)(v2 + 72 * a2 + 20);
}
