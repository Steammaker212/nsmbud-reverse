/* sub_605CFDE4
 * address: 0x605CFDE4   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CFDE4(float *a1)
{
  int v2; // r5
  float v3; // r1
  float v5[6]; // [sp+8h] [bp-18h] BYREF

  v2 = (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 340))(a1);
  if ( (v2 | 1) == 1 )
  {
    v3 = a1[28];
    v5[0] = a1[27];
    v5[1] = v3;
    (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 336))(a1);
    if ( v2 != 1 )
      v2 = 0;
    sub_60584B74(dword_60CAF15C, v5, v2, *((char *)a1 + 7328), *((unsigned __int8 *)a1 + 7339), *((_DWORD *)a1 + 1827));
    *((_BYTE *)a1 + 19) = 1;
    return 1;
  }
  else
  {
    *((_WORD *)a1 + 3666) = 28;
    a1[33] = 1.0;
    a1[34] = -8.0;
    a1[35] = 0.0;
    a1[31] = 3.0;
    a1[25] = -0.1875;
    SE_OBJ_GET_COIN_ref(*((_DWORD *)a1 + 1832), a1 + 27);
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)a1 + 18);
    *((_WORD *)a1 + 3667) = 4;
    *((_BYTE *)a1 + 535) = 1;
    return 1;
  }
}
