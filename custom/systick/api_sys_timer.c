//===========================================================================================================================
//===========================================================================================================================
//���ļ�ʵ���豸��⹦��
//�����ߣ�steve
//�������ڣ�2018-06- 04
//�����汾��version-1.0
//�޸����ڣ�
//�޸����ݣ�
//�޸İ汾��
//===========================================================================================================================
#include "config.h"
u16 systick_timer;
/**
  * @brief  SYSTICK callback.
  * @retval None
  */
void HAL_SYSTICK_Callback(void)
{
  /* NOTE : This function Should not be modified, when the callback is needed,
            the HAL_SYSTICK_Callback could be implemented in the user file
   */
   if(systick_timer < 5000)
   {
       systick_timer++;
   }
}
void api_sys_timer_task(void)
{

}
/*********************************************************
                File End
*********************************************************/