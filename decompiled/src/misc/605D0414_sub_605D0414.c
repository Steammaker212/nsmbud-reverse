/* sub_605D0414
 * address: 0x605D0414   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D0414(int a1)
{
  int result; // r0
  int *v3; // r5
  int v4; // r1

  result = sub_605B4CC4(a1);
  if ( result )
  {
    if ( result == 3 || (FIELD_U32(a1, 6260) & 8) != 0 )
    {
      sub_605D030C(a1);
      if ( FIELD_U32(a1, 7288) == 1 )
      {
        sub_605BA078(dword_60CB061C, a1 + 6980, 2, FIELD_U8(LevelInfo_instance, 18));
      }
      else
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 336))(a1);
        v4 = FIELD_U32(a1, 7308);
        if ( v4 )
          sub_6058568C(dword_60CAF15C, v4, FIELD_U32(a1, 7316));
      }
      ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
      FIELD_U8(a1, 19) = 1;
      return 1;
    }
    else
    {
      if ( result == 2 )
      {
        v3 = (int *)(a1 + 6864);
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0558);
        FIELD_U8(a1, 6846) = 2;
        result = 3;
      }
      else
      {
        if ( result != 1 )
          return result;
        v3 = (int *)(a1 + 6864);
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0534);
        FIELD_U8(a1, 6846) = 1;
        result = 2;
      }
      *v3 = result;
    }
  }
  return result;
}
