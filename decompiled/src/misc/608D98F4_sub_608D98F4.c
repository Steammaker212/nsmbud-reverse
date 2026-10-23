/* sub_608D98F4
 * address: 0x608D98F4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_608D98F4(unsigned int *a1)
{
  unsigned int v1; // r1
  int v3; // r1

  if ( (*a1 & 0x200) == 0 )
    return (char *)&unk_60B3A2DF;
  v1 = *a1;
  v3 = (v1 & 1)
     + ((v1 >> 1) & 1)
     + ((v1 >> 2) & 1)
     + ((v1 >> 3) & 1)
     + ((v1 >> 4) & 1)
     + ((v1 >> 5) & 1)
     + ((v1 >> 6) & 1)
     + ((v1 >> 7) & 1)
     + ((v1 >> 8) & 1)
     + 1;
  if ( v3 )
    return (char *)a1 + a1[v3] + *(unsigned int *)((char *)a1 + a1[v3] + 4);
  else
    return (char *)&unk_60B3A2DF;
}
