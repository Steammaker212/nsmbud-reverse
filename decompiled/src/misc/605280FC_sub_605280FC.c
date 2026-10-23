/* sub_605280FC
 * address: 0x605280FC   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605280FC(int a1)
{
  int result; // r0
  unsigned int v3; // r5
  int *v4; // r6
  unsigned int v5; // r0
  int v6; // r7

  result = FIELD_U8(a1, 40);
  if ( result )
  {
    StateMgr__execute((StateMgr *)(a1 + 24));
    v3 = 0;
    sub_60473B58((_DWORD *)(a1 + 44), 5u, 0);
    v4 = (int *)(a1 + 4620);
    result = FIELD_U32(a1, 4620);
    if ( result >= 1 )
    {
      do
      {
        v5 = 0;
        if ( v3 < 4 )
          v5 = v3;
        v6 = *(_DWORD *)(a1 + 4 * v5 + 4152);
        StateMgr__execute((StateMgr *)(v6 + 3100));
        (*(void (__fastcall **)(_DWORD, float))(**(_DWORD **)(v6 + 3124) + 12))(FIELD_U32(v6, 3124), 1.0);
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v6 + 3124) + 20))(FIELD_U32(v6, 3124));
        (*(void (__fastcall **)(_DWORD, float))(**(_DWORD **)(v6 + 3128) + 12))(FIELD_U32(v6, 3128), 1.0);
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v6 + 3128) + 20))(FIELD_U32(v6, 3128));
        StateMgr__execute((StateMgr *)(v6 + 32));
        sub_60402E34(v6 + 56);
        FIELD_U32(v6, 2644) = 1086953882;
        ++v3;
        result = *v4;
      }
      while ( (int)v3 < *v4 );
    }
  }
  return result;
}
