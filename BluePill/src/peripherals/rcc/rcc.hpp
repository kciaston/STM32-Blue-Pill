

#pragma once


#include <cstdint>
#include "rcc_setup.hpp"


namespace peripherals
{
	namespace rcc
	{

		class Rcc
		{
			public:

				static void init(void);
				static void set_system_clock_HSE(uint32_t crystalFreq);
				static void set_system_clock_HSI(void);
				static void set_system_clock(RccSetup& setup);
				static uint32_t get_bus_frequency(RccBus bus);

			protected:


			private:
				Rcc() = delete;
				~Rcc() = delete;

				constexpr uint32_t HSI_Freq = 8000000;
				constexpr uint32_t LSI_Freq = 40000;

				static uint8_t get_flash_latency(uint32_t freq);


		};

	} // namespace rcc

} // namespace peripherals

