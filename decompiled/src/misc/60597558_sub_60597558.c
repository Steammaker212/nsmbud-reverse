/* sub_60597558
 * address: 0x60597558   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60597558(int a1)
{
  char v1; // r12
  int result; // r0
  int v4; // r5
  int v5; // r11
  int v6; // r6
  int v7; // r0
  int v8; // r5
  int v9; // r11
  int v10; // r6
  int v11; // r0

  result = FIELD_U8(a1, 8160) - 1;
  switch ( result )
  {
    case 0:
      result = sub_60597068(a1);
      break;
    case 1:
      v4 = FIELD_U32(a1, 36);
      if ( v4 != a1 + 32 )
      {
        v5 = FIELD_U32(a1, 44);
        v6 = v4 - v5;
        do
        {
          if ( ((unsigned int)&dword_60CAEC60 & ~(1616475668 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CAEC60) )
          {
            dword_60CAEC5C = (int)&off_60BD48EC;
            _cxa_guard_release(&dword_60CAEC60);
          }
          v7 = (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60CAEC5C);
          if ( v6 )
          {
            if ( v7 == 1 )
              ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v6 + 6120));
          }
          v4 = FIELD_U32(v4, 4);
          v6 = v4 - v5;
          result = a1 + 32 - FIELD_U32(a1, 44);
        }
        while ( v4 - v5 != result );
      }
      break;
    case 2:
      result = sub_6059719C(a1);
      break;
    case 3:
      v8 = FIELD_U32(a1, 36);
      if ( v8 != a1 + 32 )
      {
        v9 = FIELD_U32(a1, 44);
        v10 = v8 - v9;
        do
        {
          if ( ((unsigned int)&dword_60C83FB4 & ~(1616475912 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C83FB4) )
          {
            dword_60C83FB0 = (int)&off_60BC00C8;
            _cxa_guard_release(&dword_60C83FB4);
          }
          v11 = (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C83FB0);
          if ( v10 && v11 == 1 )
            ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v10 + 6176));
          v8 = FIELD_U32(v8, 4);
          v10 = v8 - v9;
          result = a1 + 32 - FIELD_U32(a1, 44);
        }
        while ( v8 - v9 != result );
      }
      break;
    default:
      return result;
  }
  return result;
}
