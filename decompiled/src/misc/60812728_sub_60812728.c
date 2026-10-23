/* sub_60812728
 * address: 0x60812728   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60812728(int a1, int a2, float *a3)
{
  unsigned int v6; // r0
  int *v7; // r6
  unsigned int v8; // r1

  v6 = FIELD_U32(a1, 120);
  if ( v6 )
  {
    v7 = *(int **)(a1 + 140);
    v8 = 0;
    while ( *v7 )
    {
      ++v8;
      ++v7;
      if ( v8 >= v6 )
        return;
    }
    if ( v7 )
    {
      sub_608AD060(a1, v7, a2, 0);
      if ( *v7 )
      {
        sub_6080954C(SoundSystem_instance, v7);
        nullsub_63(a1, v7, a2, a3);
        sub_60808570(SoundSystem_instance, v7, a3);
      }
    }
  }
}
