/* sub_607343F8
 * address: 0x607343F8   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607343F8(int a1)
{
  int result; // r0
  _BYTE *v3; // r5
  int v4; // r1
  int v5; // r0
  int *v6; // r6
  int v7; // r0
  int v8; // r1
  int v9; // r5
  int ResArchiveById; // r0
  const char *v11[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (_BYTE *)(a1 + 6780);
  result = FIELD_U8(a1, 6780);
  switch ( result )
  {
    case 2:
      result = a1 + 6764;
      v4 = FIELD_U32(a1, 6764);
      if ( v4 )
      {
        *(_DWORD *)result = v4 - 1;
      }
      else
      {
        result = FIELD_U32(a1, 6804);
        switch ( result )
        {
          case 0:
            result = (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBDD60);
            break;
          case 1:
            result = (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBDE20);
            break;
          case 2:
            FIELD_U8(a1, 6801) = 1;
            result = (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBDDE0);
            break;
          case 3:
            result = (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBDE00);
            break;
          default:
            return result;
        }
      }
      break;
    case 1:
      v6 = (int *)(a1 + 6764);
      v5 = FIELD_U32(a1, 6764);
      if ( v5 )
      {
        v7 = v5 - 1;
        *v6 = v7;
        if ( !v7 && FIELD_U32(a1, 6804) == 3 )
          sub_60807EF0(SoundSystem_instance, "SE_MG_SH_ITEM_NG", 0, 1);
      }
      result = FIELD_U32(a1, 6100);
      v8 = *(_DWORD *)(**(_DWORD **)(result + 12) + 28) & 0x20;
      if ( FIELD_U32(a1, 6804) )
      {
        if ( !v8 )
          return result;
        ++*v3;
        v9 = **(_DWORD **)(result + 12);
        ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), FIELD_U32(a1, 12088));
        v11[0] = (const char *)&sead__SafeStringBase__vtable;
        v11[1] = "shufflePanel_wait";
        SkeletalAnim_play(v9, ResArchiveById, v11);
        result = 0;
      }
      else
      {
        if ( !v8 )
          return result;
        ++*v3;
        result = 20;
      }
      *v6 = result;
      return result;
    case 0:
      *v3 = 1;
      FIELD_U32(a1, 6764) = 15;
      return 6764;
  }
  return result;
}
