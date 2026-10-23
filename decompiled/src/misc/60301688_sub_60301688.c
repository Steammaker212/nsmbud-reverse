/* sub_60301688
 * address: 0x60301688   size: 848   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

EnemyFreezeMgr *__fastcall sub_60301688(int a1)
{
  char v2; // r0
  bool v3; // zf
  char v4; // r12
  int ProfileId; // r0
  char v6; // r12

  v2 = FIELD_U8(a1, 2872);
  v3 = (v2 & 1) == 0;
  if ( (v2 & 1) != 0 )
    v3 = FIELD_U32(a1, 164) == 0;
  if ( v3 )
  {
    if ( Actor__getProfileId((Actor *)a1) == 497 || Actor__getProfileId((Actor *)a1) == 498 )
    {
      if ( FIELD_U32(a1, 164) )
      {
        if ( ((unsigned int)&dword_60C92E08 & ~(1613764348 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C92E08) )
        {
          stru_60C92DE5.field_0 = 1;
          stru_60C92DE5.field_1 = 1;
          stru_60C92DE5.field_2 = 5;
          _cxa_guard_release(&dword_60C92E08);
        }
        return EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), &stru_60C92DE5);
      }
      else
      {
        if ( ((unsigned int)&dword_60C92E04 & ~(1613764640 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C92E04) )
        {
          stru_60C92DE2.field_0 = 1;
          stru_60C92DE2.field_1 = 0;
          stru_60C92DE2.field_2 = 5;
          _cxa_guard_release(&dword_60C92E04);
        }
        return EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), &stru_60C92DE2);
      }
    }
    else
    {
      if ( ((unsigned int)&dword_60C92E0C & ~(1613764756 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C92E0C) )
      {
        stru_60C92DE8.field_0 = 0;
        stru_60C92DE8.field_1 = 0;
        stru_60C92DE8.field_2 = 4;
        _cxa_guard_release(&dword_60C92E0C);
      }
      return EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), &stru_60C92DE8);
    }
  }
  else
  {
    ProfileId = Actor__getProfileId((Actor *)a1);
    if ( ProfileId == 497 || Actor__getProfileId((Actor *)a1) == 498 )
    {
      if ( FIELD_U32(a1, 164) )
      {
        if ( ((unsigned int)&dword_60C92DFC & ~(1613764528 << v6) & 1) == 0 )
        {
          if ( _cxa_guard_acquire(&dword_60C92DFC) )
          {
            byte_60C92DDC = 1;
            byte_60C92DDD = 1;
            byte_60C92DDE = 5;
            _cxa_guard_release(&dword_60C92DFC);
          }
        }
        return EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C92DDC);
      }
      else
      {
        if ( ((unsigned int)&dword_60C92DF8 & ~(1613764868 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C92DF8) )
        {
          byte_60C92DD9 = 1;
          byte_60C92DDA = 0;
          byte_60C92DDB = 5;
          _cxa_guard_release(&dword_60C92DF8);
        }
        return EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C92DD9);
      }
    }
    else
    {
      if ( ((unsigned int)&dword_60C92E00 & ~(1613764984 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C92E00) )
      {
        byte_60C92DDF = 0;
        byte_60C92DE0 = 1;
        byte_60C92DE1 = 4;
        _cxa_guard_release(&dword_60C92E00);
      }
      return EnemyFreezeMgr_setFlags((EnemyFreezeMgr *)(a1 + 6152), (EnemyFreezeMgr_Flags *)&byte_60C92DDF);
    }
  }
}
