/* sub_608125BC
 * address: 0x608125BC   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_608125BC(int a1, int a2, int a3, float *a4)
{
  int v8; // r0
  unsigned int v9; // r1
  int *v10; // r2
  unsigned int v11; // r3
  int *v12; // r7
  unsigned int v13; // r0
  int v14; // r4
  _DWORD v16[9]; // [sp+4h] [bp-24h] BYREF

  v8 = sub_60808F58(SoundSystem_instance, a2);
  v9 = FIELD_U32(a1, 120);
  if ( v9 )
  {
    v10 = *(int **)(a1 + 140);
    v11 = 0;
    v12 = v10;
    while ( !*v12 || *(_DWORD *)(*v12 + 220) != v8 )
    {
      ++v11;
      ++v12;
      if ( v11 >= v9 )
        goto LABEL_6;
    }
    if ( v12 )
    {
LABEL_13:
      v14 = 0;
      sub_608AD1CC(a1, v12, a2, 0);
      if ( *v12 )
      {
        if ( sub_6080852C(SoundSystem_instance, a2) == 1 )
        {
          sub_608A8604(v16, v12);
          if ( v16[0] )
            sub_608B7318(v16[0], 0, a3);
          sub_608A86F0(v16);
        }
        sub_6080954C(SoundSystem_instance, v12);
        nullsub_63(a1, v12, a2, a4);
        sub_60808570(SoundSystem_instance, v12, a4);
        return v12;
      }
      return (int *)v14;
    }
LABEL_6:
    v13 = 0;
    while ( *v10 )
    {
      ++v13;
      ++v10;
      if ( v13 >= v9 )
        return 0;
    }
    v12 = v10;
    if ( v10 )
      goto LABEL_13;
  }
  return 0;
}
