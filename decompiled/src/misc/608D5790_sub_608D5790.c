/* sub_608D5790
 * address: 0x608D5790   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_608D5790(int a1)
{
  unsigned int v1; // r2
  int v3; // r2

  v1 = FIELD_U32(a1, 4);
  if ( (v1 & 0x200) == 0 )
    return &unk_60B3A167;
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
    return (void *)(a1 + *(_DWORD *)(a1 + 4 + 4 * v3) + *(_DWORD *)(a1 + *(_DWORD *)(a1 + 4 + 4 * v3) + 4));
  else
    return &unk_60B3A167;
}
