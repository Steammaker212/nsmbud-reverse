/* sub_608124A4
 * address: 0x608124A4   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608124A4(int a1, int a2, float *a3)
{
  int v6; // r0
  unsigned int v7; // r1
  int *v8; // r2
  unsigned int v9; // r3
  int *v10; // r7
  unsigned int v11; // r0
  int v12; // r4

  v6 = sub_60808F58(SoundSystem_instance, a2);
  v7 = FIELD_U32(a1, 120);
  if ( v7 )
  {
    v8 = *(int **)(a1 + 140);
    v9 = 0;
    v10 = v8;
    while ( !*v10 || *(_DWORD *)(*v10 + 220) != v6 )
    {
      ++v9;
      ++v10;
      if ( v9 >= v7 )
        goto LABEL_6;
    }
    if ( v10 )
    {
LABEL_13:
      v12 = 0;
      sub_608AD1CC(a1, v10, a2, 0);
      if ( *v10 )
      {
        sub_6080954C(SoundSystem_instance, v10);
        nullsub_63(a1, v10, a2, a3);
        sub_60808570(SoundSystem_instance, v10, a3);
        return v10;
      }
      return (int *)v12;
    }
LABEL_6:
    v11 = 0;
    while ( *v8 )
    {
      ++v11;
      ++v8;
      if ( v11 >= v7 )
        return 0;
    }
    v10 = v8;
    if ( v8 )
      goto LABEL_13;
  }
  return 0;
}
