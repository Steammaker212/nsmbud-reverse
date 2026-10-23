/* sub_60812398
 * address: 0x60812398   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60812398(int a1, int a2, int a3, float *a4)
{
  unsigned int v8; // r0
  int *v9; // r4
  unsigned int v10; // r1
  int *v11; // r7
  _DWORD v13[9]; // [sp+4h] [bp-24h] BYREF

  v8 = FIELD_U32(a1, 120);
  if ( !v8 )
    return 0;
  v9 = *(int **)(a1 + 140);
  v10 = 0;
  while ( *v9 )
  {
    ++v10;
    ++v9;
    if ( v10 >= v8 )
      return 0;
  }
  v11 = 0;
  if ( v9 )
  {
    sub_608AD060(a1, v9, a2, 0);
    if ( *v9 )
    {
      sub_6080954C(SoundSystem_instance, v9);
      nullsub_63(a1, v9, a2, a4);
      sub_60808570(SoundSystem_instance, v9, a4);
      v11 = v9;
      if ( sub_6080852C(SoundSystem_instance, a2) == 1 )
      {
        sub_608A8604(v13, v9);
        if ( v13[0] )
          sub_608B7318(v13[0], 0, a3);
        sub_608A86F0(v13);
        return v9;
      }
    }
  }
  return v11;
}
