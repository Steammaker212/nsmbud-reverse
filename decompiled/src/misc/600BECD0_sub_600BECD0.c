/* sub_600BECD0
 * address: 0x600BECD0   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BECD0(float *a1)
{
  int v1; // r8
  float *v2; // r5
  float *v3; // r10
  _DWORD *v4; // r7
  float *v5; // r11
  float *v6; // r6
  int v7; // r0
  int v8; // r4
  int result; // r0

  v1 = 0;
  a1[1866] = -3.0;
  v2 = a1 + 1866;
  a1[1867] = -5.0;
  v3 = a1 + 1867;
  v4 = a1 + 1862;
  v5 = a1 + 1869;
  v6 = a1 + 1868;
  do
  {
    v7 = v4[v1];
    if ( v7 != -1 && v7 <= 4 )
    {
      if ( (unsigned int)v7 >= 4 )
        v7 = 0;
      v8 = *(_DWORD *)(PlayerMgr_instance + 4 * v7 + 32);
      if ( v8 )
      {
        sub_6075EDB0(*(_DWORD *)(PlayerMgr_instance + 4 * v7 + 32));
        sub_6079D134(2.0);
        sub_6079D0A0(v8, v6);
        *v6 = *v6 - (float)(*v2 * 10.0);
        *v5 = *v5
            - (float)((float)((float)((float)(*(float *)&dword_60C83948 * 0.5) * 10.0) * 10.0) + (float)(*v3 * 10.0));
        sub_6079D104(v8, v2);
        sub_6079D158(v8, 954437176);
      }
    }
    ++v1;
  }
  while ( v1 != 4 );
  result = 5 * *((_DWORD *)a1 + 1860) + 30;
  *((_DWORD *)a1 + 1854) = result;
  return result;
}
